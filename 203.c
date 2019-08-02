/*************************************************************************
	> File Name: 203.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月02日 星期五 18时37分36秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 10

int num[MAX_N + 5][MAX_N + 5];
int ret[MAX_N + 5];

void sort(int *num, int val, int cnt) {
    num[cnt] = val;
    int i = cnt;
    for (i = cnt; i > 0; i--) {
        if (num[i] > num[i - 1]) {
            int tmp = num[i];
            num[i] = num[i - 1];
            num[i - 1] = tmp;
        }
    }
    return ;
}

int my_round(double x) {
    return (int)(x + 0.5);
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    double s = 0.0;
    int dig = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &num[i][j]);
            s += (double)num[i][j];
            sort(ret, num[i][j], dig);
            dig++;
        }
    }
    s /= (m * 1.0 * n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int max = 0;
        for (int j = 0; j < m; j++) {
            if (num[j][i] > max) max = num[j][i];
            if (num[j][i] >= s) cnt++;
        }
        printf("%d\n", max);
    }
    for (int i = 0; i < m * n; i++) {
        if (i) printf(" ");
        printf("%d", ret[i]);
    }
    printf("\n%d\n%d\n", my_round(s), cnt);
    return 0;
}
