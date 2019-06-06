/*************************************************************************
	> File Name: 123.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月06日 星期四 18时58分35秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if((a >= c && b <= d) || (a <= c && b >= d)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
