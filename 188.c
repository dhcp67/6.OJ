/*************************************************************************
	> File Name: 188.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月06日 星期六 15时31分56秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000000

int prime[MAX_N] = {0};

void init_prime() {
    for (int i = 2; i * i <= MAX_N; i++) {
        for (int j = i; i * j <= MAX_N; j++) {
            prime[i * j] = 1;
        }
     }
}

int main() {
    init_prime();
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = m; i <= n; i++) {
        if (!prime[i]) printf("%d\n", i);
    }
    return 0;
}
