/*************************************************************************
	> File Name: 232.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月03日 星期六 10时01分10秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 5000

int pos[MAX_N + 5][MAX_N + 5];

int solve(int r) {
    if (!(--r)) r = 1;
    int s = 0, ans = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            s += pos[i][j];
        }
    }
    int note = s;
    for (int i = 0; i <= MAX_N; i++) {
        if (i - r >= 0) {
            for (int j = 0; j < r; j++) {
                note -= pos[j][i - r];
                note += pos[j][i];
            }
        }
        s = note;
        if (s > ans) ans = s;
        for (int j = 0; j < MAX_N; j++) {
            for (int o = i - r + 1; o <= i; o++) {
                s -= pos[j][o];
                s += pos[j + r][o];
            }
            if (s > ans) ans = s;
        }
    }
    return ans;
}

int main() {
    int n, r, ans = 0;
    scanf("%d %d", &n, &r);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        scanf("%d", &pos[x][y]);
    }
    ans = solve(r);
    printf("%d\n", ans);
    return 0;
}
