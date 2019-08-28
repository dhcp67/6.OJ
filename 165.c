/*************************************************************************
	> File Name: 165.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月26日 星期三 19时11分57秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    long long n, sum = 0;
    scanf("%lld", &n);
    for (long long a = 1; a < n; a++) {
        long long b = n * n - a * a;
        if(sqrt(b) == ceil(sqrt(b))) {
            sum++;
        }
    }
    printf("%lld\n", sum / 2);
    return 0;
}
