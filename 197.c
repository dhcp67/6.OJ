/*************************************************************************
	> File Name: 197.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月06日 星期六 23时47分54秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 10
int num[MAX_N + 5] = {0};

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }
    for (i = MAX_N - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (num[j] < num[j + 1]) {
                int tmp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = tmp;
            }
        }
    }
    for (int i = 0; i < MAX_N; i++) {
        if (i) printf(" ");
        printf("%d", num[i]);
    } 
    printf("\n");
    return 0;
}
