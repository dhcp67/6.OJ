/*************************************************************************
	> File Name: 186.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月05日 星期五 22时22分33秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 100000

int num[MAX_N] = {0};

int number(int pos, int n, int m) {
    if (pos > m) return 0;
    else return n + number(num[pos] + pos, 1, m);
}

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num[i]);
    }
    ans += number(1, 1, n);
    printf("%d\n", ans);
    return 0;
}
