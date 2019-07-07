/*************************************************************************
	> File Name: 180.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月05日 星期五 21时38分24秒
 ************************************************************************/

#include <stdio.h>

long long My_pow(int n) {
    long long ans = 2;
    for (int i = 1; i < n; i++) {
        ans *= 2;
    }
    return ans;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", My_pow(n));
    return 0;
}
