/*************************************************************************
	> File Name: 71.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月21日 星期三 20时03分45秒
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 10000

struct Unionset {
    int fa[MAX_N + 5];
    void init(int n) {
        for (int i=0 ; i <= n; i++) fa[i] = i;
    }
    int get(int x) {
        return (fa[x] = (x == fa[x] ? x :get(fa[x])));
    }
    void merge(int a, int b) {
        fa[get(a)] = get(b);
    }
};

Unionset u;

void read(int &n, int &m) {
    cin >> n >> m;
}


int main() {
    int n, m;
    read(n, m);
    u.init(n);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1) {
            u.merge(b, c);
        } else {
            cout << ((u.get(b) == u.get(c)) ? "Yes" : "No") << endl;
        }
    }
    return 0;
}
