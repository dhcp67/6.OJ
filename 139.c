/*************************************************************************
	> File Name: 139.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 16时10分33秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ret = 2;
    int cnt = n - 1;
    for(int i = 1; i <= 2 * n - 1; i++) {
        for(int tmp = 1; tmp <= cnt; tmp++) {
            printf( " ");
        }
        if(i < n) cnt--;
        else cnt++;
        for(int j = 0; j < ret; j++) {
            printf("A");
        }
        printf("\n");
        if(i < n) ret += 2;
        else ret -= 2;
    }
    return 0;
}
