/*************************************************************************
	> File Name: 108.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月09日 星期日 20时36分06秒
 ************************************************************************/

#include <stdio.h>

int main() {
    double m, n;
    char r;
    scanf("%s%lf%lf", &r, &m, &n);
    printf("%.2lf\n", r == 'r' ? m * n : 1.0 / 2 * m * n);
    return 0;
}
