/*************************************************************************
	> File Name: 160.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月15日 星期六 11时08分51秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    int r, h;
    scanf("%d%d", &r, &h);
    double s = 2.0 * ((PI * r * r) / 2 + 4.0 * r * r / 2) + (PI * r + 2.0 * r + sqrt(2.0 * pow(2.0 * r, 2))) * h;
    printf("%.2lf\n", s);
    return 0;
}
