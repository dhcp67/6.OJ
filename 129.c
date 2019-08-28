/*************************************************************************
	> File Name: 129.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月11日 星期二 15时25分52秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, x, min = 10000;
    scanf("%d", &n);
    do {
        scanf("%d", &x);
        min > x ?  min = x : min;
    }while(--n);
    printf("%d\n", min);
    return 0;
}
