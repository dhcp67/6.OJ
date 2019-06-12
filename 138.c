/*************************************************************************
	> File Name: 138.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 13时40分22秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    n *= 2;
    for(int i = n / 2; i > 0; i--) {
        for(int j = n; j > 0; j--) {
            printf("A");
        }
        printf("\n");
        n -= 2;
    }
    return 0;
}
