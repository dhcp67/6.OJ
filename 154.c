/*************************************************************************
	> File Name: 154.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月14日 星期五 21时21分24秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = n; i > 0; i--) {
        for(int j = i; j > 0; j--) {
            if(i != j) {
                printf(" ");
            }
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
