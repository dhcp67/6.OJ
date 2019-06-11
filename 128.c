/*************************************************************************
	> File Name: 128.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月11日 星期二 15时21分35秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, x, s = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        s += x;
    }
    printf("%.2lf\n", 1.0 * s / n);
    return 0;
}
