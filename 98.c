/*************************************************************************
	> File Name: 98.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月07日 星期五 19时35分08秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define PI 3.14 //acos(-1)


int main () {
    double r, h;
    scanf("%lf%lf", &r, &h);
    printf("%.2lf\n%.2lf\n", r * r * PI,r * r * PI * h);
    return 0;
}
