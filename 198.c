/*************************************************************************
	> File Name: 198.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月29日 星期六 10时53分30秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000
#define NUM 1000000007

int num[100005][MAX_N] = {0};

int main() {
    int n;
    num[0][0] = num[1][1] = num[2][1] = 1;
    scanf("%d", &n);
    for (int i = 3; i <= n; i++) {
        for (int j = 1; j <= num[0][0]; j++) {
            num[i][j] = num[i - 1][j] + num[i - 2][j];
            int ret = num[i][j] / 10;
            if (ret) {
                if (j == num[0][0]) num[0][0]++;
                num[i][j] %= 10;
                num[i][j + 1] += ret;
                printf("%d<%d %d ",num[i][j + 1], j + 1, i);
            }
        }
    }
    for (int i = num[0][0]; i >= 1; i--) {
        printf("%d", num[n][i]);
    }
    printf("\n");
    return 0;
}
