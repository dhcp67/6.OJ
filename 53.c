/*************************************************************************
	> File Name: 53.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月27日 星期四 19时58分17秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000000
int prime[MAX_N + 5];
int num[MAX_N + 5];
int dig[MAX_N + 5];

int main() {
    for (int i = 0; i < MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = 1;
            dig[i] = i + 1;
            num[i] = i;
            for (int j = 1; j <= prime[0]; j++) {
                if (prime[j] * i  > MAX_N) break;
                prime[prime[j] * i] = 1;
                if (i % prime[j]) {
                    dig[i * prime[j]] = dig[i]* dig[prime[j]];
                    num[i * prime[j]] = prime[j];
                } else {
                    num[i * prime[j]] = num[i] * prime[j];
                    int min_prime = num[i * prime[j]], rest = i * prime[j] / min_prime;
                    dig[i * prime[j]] = dig[min_prime] * dig[rest];
                    if (rest == 1) dig[i * prime[j]] = (min_prime * prime[j] - 1) / (prime[j] - 1);
                    break;
                }
            }
        }
    }
    long long ans;
    return 0;
}
