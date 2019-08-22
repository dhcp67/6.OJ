/*************************************************************************
	> File Name: 73.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月22日 星期四 14时19分45秒
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 1000
#define MAX_M 1000000
#define ind(i, j) 
char g[MAX_N + 5][MAX_N + 5];

struct UnionSet {
    int fa[MAX_M + 5];
    void init(int n) {
        for (int i = 0; i <= n; i++) fa[i] = i;
    }
    int get(int x) {
        return (fa[x] = (x - fa[x] ? get(fa[x]) : x));
    }
    void merge(int a, int b) {
        fa[get(a)] = get(b);
    }
};

UnionSet u;

int main() {
    int n, m;
    cin >> n >> m;
    u.init(n * m);
    for (int i= 0; i < n; i++) { 
        cin >> g[i];
        for (int j = 0; j < m; j++) {
            if (g[i][j] == 'X') continue;
            if (i && g[i - 1][j] == '0') u.merge(ind(i, j), ind(i - 1, j));
            if (j && g[i][j - 1] == '0') u.merge(ind(i, j), ind(i, j - 1));
            if (i == 0 || i == n - 1) u.merge(ind(i, j), 0);
            if (i == 0 || i == m - 1) u.merge(ind(i, j), 0);
        }

    }
    int ans = 0; 
    for (int i =0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] == 'X') continue;

        }
    }
    return 0;
}
