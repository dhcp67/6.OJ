/*************************************************************************
	> File Name: 126.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月10日 星期一 21时32分23秒
 ************************************************************************/

#include <stdio.h>

int main() {
    double r1, r2;
    double pi = 3.14;
    scanf("%lf%lf", &r1, &r2);
    printf("%.2lf\n", pi * r1 * r1 - pi * r2 *r2);
    return 0;
}
