/*************************************************************************
	> File Name: 2.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月02日 星期五 14时13分48秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char pr = 'D';
    if (n >= 60 && n < 75) {
        pr = 'C';
    } else if (n >= 75 && n < 85) {
        pr = 'B';
    } else if (n >= 85) {
        pr = 'A';
    }
    printf("%c\n", pr);
    return 0;
}
