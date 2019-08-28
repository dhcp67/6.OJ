/*************************************************************************
	> File Name: 158.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月14日 星期五 22时43分51秒
 ************************************************************************/

#include <stdio.h>

void output(int n, int m, int ret, int ind) {
    if(!n) {
        return ;
    }
    for (int i = 1; i <= ind; i++) {
        printf(" ");
    }
    for(int i = 1; i <= 2 * ret + 1; i++) {
        if(i == 1 || i == 2 * ret + 1) {
            printf("%d", ret);
        } else {
            printf(" ");
        }
    }
    printf("\n");
    if(n > m + 1) {
        ret--;
        ind++;
    } else {
        ind--;
        ret++;
    }
    output(n - 1, m, ret, ind);
    return ;
}

int main() {
    int n;
    scanf("%d", &n);
    output(2 * n + 1, n, n, 0);
    return 0;
}
