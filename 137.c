/*************************************************************************
	> File Name: 137.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 13时36分03秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char word = 'A';
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n; j++) {
            printf("%c", word++);
        }
        printf("\n");
        n--;
    }
    return 0;
}
