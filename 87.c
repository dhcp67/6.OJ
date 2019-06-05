/*************************************************************************
	> File Name: 87.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月05日 星期三 19时53分21秒
 ************************************************************************/

#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("%.2lf\n%.2lf\n", 2.0 * (a + b), a * b);
    return 0;
}
