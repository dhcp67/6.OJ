/*************************************************************************
	> File Name: 161.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月15日 星期六 12时15分25秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int x, n;
    scanf("%d%d", &x, &n);
    double s = x;
    for (int i = 0; i < n; i++) {
        s *= 1.06;
    }
    printf("%lf\n", s);
    return 0;
}
