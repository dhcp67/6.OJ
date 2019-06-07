/*************************************************************************
	> File Name: 99.求出跑道的长度.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月07日 星期五 19时48分08秒
 ************************************************************************/

#include <stdio.h>

int main() {
    double a, v;
    scanf("%lf%lf", &v, &a);
    double s = (v * v) / (2 * a);
    printf("%.2lf\n", s);
    return 0;
}
