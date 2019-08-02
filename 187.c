/*************************************************************************
	> File Name: 187.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月02日 星期五 11时00分12秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define MAX_N 60

struct Msg{
    int num;
    long long *ret;
};

long long num[MAX_N + 5];
long long power[MAX_N + 5] = {0};

long long power_func(int n) {
    if (n == 1) return 1;
    if (power[n]) return power[n];
    power[n] = n + 2 * power_func(n - 1);
    return power[n];
}

long long hnt(int n) {
    if (n == 1) return 1;
    if(num[n]) return num[n];
    num[n] = 2 * hnt(n - 1) + 1;
    return num[n];
}

int main() {
    long long cnt = 0, ret = 0;
    pthread_t p;
    int n;
    scanf("%d", &n);
    struct Msg P = {n, &ret};
    ret = power_func(n);
    cnt = hnt(n);
    printf("%lld %lld\n", cnt, ret);
    return 0;
}
