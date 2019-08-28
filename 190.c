/*************************************************************************
	> File Name: 190.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月06日 星期六 16时13分57秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 8000000
int prime[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i * i <= MAX_N; i++) {
        for (int j = i; i * j <= MAX_N; j++) {
            prime[i * j] = 1;
        }
    }
}

int main() {
    init();
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++) {
        if ((!prime[i]) && (!prime[n - i])) ans++;
    }
    printf("%d\n", ans);
    return 0;
}
