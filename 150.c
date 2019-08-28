/*************************************************************************
	> File Name: 150.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 20时25分59秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int m, n;
    int arr[205][205]  = {0};
    scanf("%d%d", &m, &n);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = m - 1; j >= 0; j--) {
            if(j != m - 1) printf(" ");
            printf("%d", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
