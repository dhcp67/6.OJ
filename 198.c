/*************************************************************************
	> File Name: 198.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月29日 星期六 10时53分30秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000000007

long long num[MAX_N];

int main() {
    int n;
    num[1] = num[2] = 1;
    scanf("%d", &n);
    for (int i = 3; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 2];
    }
    printf("%lld\n", num[n]);
    return 0;
}
