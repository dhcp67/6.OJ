/*************************************************************************
	> File Name: 191.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月06日 星期六 16时23分43秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 8000000
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
    int l, r, a, b, c, d, ret = 0, max = 0, min = MAX_N;
    scanf("%d%d", &l, &r);
    for (int i = l; i <= r; i++) {
        if (prime[i]) continue;
        int tmp = i;
        if (ret && ret != tmp) {
            if (tmp - ret > max) {
                c = ret, d = tmp;
                max = tmp - ret;
            }
            if (tmp - ret < min) {
                min = tmp - ret;
                a = ret, b = tmp;
            }
        }
        ret = tmp;
    }
    if (max) {
        printf("%d,%d are closest, %d,%d are most distant.\n", a, b, c, d);
    } else {
        printf("There are no adjacent primes.\n");
    }
    return 0;
}
