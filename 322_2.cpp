/*************************************************************************
	> File Name: /home/lcnh/haizei/6.OJ/322_2.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月23日 星期五 14时38分06秒
 ************************************************************************/

#include <iostream>

using namespace std;
#define MAX_N 1000000

struct Unionset{
    int fa[MAX_N + 5];
    void init(int n) {
        for(int i = 0; i < n; i++) fa[i] = i;
    }
    int get(int x) { return (fa[x] = (x - fa[x] ? get(fa[x]): x)); }
    void merge(int a, int b) {
        fa[get(a)] = get(b);
    }
};

struct Data{
    int i, j, e;
} data[MAX_N + 5];

Unionset u;

int solve() {
    int n;
    int ret = 1;
    cin >> n;
    u.init(n);
    for (int k = 0; k < n; k++) {
        cin >> data[k].i >> data[k].j >> data[k].e;
        if (data[k].e) u.merge(data[k].i, data[k].j);
    }
    for (int k = 0; k < n; k++) {
        if (data[k].e) continue;
        if (u.get(data[k].i) == u.get(data[k].j)) {
            ret = 0;
            break;
        }
    }
    if (ret) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
