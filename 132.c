/*************************************************************************
	> File Name: 132.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 13时16分33秒
 ************************************************************************/

#include <stdio.h>

int main() {
    long long n, x, s = 1;
    scanf("%lld", &n);
    while(n--) {
        scanf("%lld", &x);
        s *= x;
    }
    printf("%lld\n", s);
    return 0;
}
