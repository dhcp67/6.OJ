/*************************************************************************
	> File Name: 278.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月16日 星期五 14时08分43秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000000

void getnext(char *str, int *next, int n) {
    next[0] = -1;
    for (int i = 1, cnt = -1; i < n; i++) {
        while (cnt >= 0 && str[i] != str[cnt + 1]) {
            cnt = next[cnt];
        }
        if (str[i] == str[cnt + 1]) {
            cnt++;
        }
        next[i] = cnt;
    }
}

int main() {
    int n;
    char str[MAX_N + 5] = {0};
    int next[MAX_N + 5];
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        scanf("%c", &str[i]);
    }
    getnext(str, next, n);
    for (int i = 0; i < n; i++) {
        if ()
    }
    return 0;
}
