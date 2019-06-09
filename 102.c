/*************************************************************************
	> File Name: 10.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月09日 星期日 19时37分21秒
 ************************************************************************/

#include <stdio.h>

int main() {
    double a, b, c, t;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &t);
    //1 = 1/a * t + 1/b * t + (1/a + 1/b + 1/c) * x;
    double x = (1.0 - 1.0 / a * t - 1.0 / b * t)  / (1.0 / a + 1.0 / b + 1.0 / c) + t;
    printf("%.2lf\n", x);
    return 0;
}
