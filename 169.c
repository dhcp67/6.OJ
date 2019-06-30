/*************************************************************************
	> File Name: 169.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月28日 星期五 20时59分33秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 1000
char arr[MAX_N + 5];
int cnt[MAX_N + 5];

int main() {
    int n, ans = 0;
    char ret;
    int tmp = 'A' - 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%c", &ret);
        getchar();
        int swap = ret - tmp;
        scanf("%d", &cnt[swap]);
    }
    for (int i = 0; i < 30; i++) {
        printf("%d\n", cnt[i]);
    }
    return 0;
}
