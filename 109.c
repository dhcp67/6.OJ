/*************************************************************************
	> File Name: 109.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月09日 星期日 20时49分34秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", ((n % 10) % 2 == 0|| (n % 100) / 10 % 2 == 0|| (n % 1000) / 100 % 2 == 0|| (n / 1000) % 2 == 0) ? "YES":"NO");
    return 0;
}