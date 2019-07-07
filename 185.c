/*************************************************************************
	> File Name: 185.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月05日 星期五 22时16分45秒
 ************************************************************************/

#include <stdio.h>

int feibo(int n) {
    if (n == 1 || n == 2) return 1;
    else return feibo(n - 1) + feibo(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", feibo(n));
    return 0;
}
