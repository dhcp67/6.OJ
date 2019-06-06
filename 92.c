/*************************************************************************
	> File Name: 92.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月06日 星期四 12时54分52秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define PI acos(-1)

int main() {
    double r;
    scanf("%lf", &r);
    printf("%lf\n", PI);
    printf("%.2lf\n%.2lf\n", 2.0 * PI * r, PI * pow(r, 2.0));
    return 0;
}
