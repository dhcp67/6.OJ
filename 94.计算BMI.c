/*************************************************************************
	> File Name: 94.计算BMI.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月06日 星期四 23时43分40秒
 ************************************************************************/

#include <stdio.h>

int main() {
    double w, h;
    scanf("%lf%lf", &w, &h);
    double BMI = w / (h * h);
    printf("%.2lf\n", BMI);
    return 0;
}
