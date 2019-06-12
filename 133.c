/*************************************************************************
	> File Name: 133.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 13时19分55秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        int tmp = i;
        for(int j = i; j <= n; j++) {
            if(tmp != j) printf("\t");
            printf("%d*%d=%d", i, j, i* j);
        }
        printf("\n");
    }
    return 0;
}
