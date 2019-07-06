/*************************************************************************
	> File Name: 178.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月05日 星期五 20时07分11秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 1000000

int main() {
    int n;
    char ans[MAX_N + 5] = {0};
    char swap[MAX_N + 5] = {0};
    char cnt = 'A';
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        ans[strlen(ans)] = cnt;
        cnt++;
        strcat(ans, swap);
        strcpy(swap, ans);
    }
    printf("%s\n", ans);
    return 0;
}
