/*************************************************************************
	> File Name: 106.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月09日 星期日 20时25分58秒
 ************************************************************************/

#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n);
    printf("%g\n", n >= 0 ? n : -n);
    return 0;
}