/*************************************************************************
	> File Name: 226.a^b.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月06日 星期四 13时24分01秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, p;
    scanf("%d%d%d", &a, &b, &p);
    printf("%lf\n", pow(a ,b));
    printf("%d\n", (int)(pow(a, b)) % p);
    return 0;
}
