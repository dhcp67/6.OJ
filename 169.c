/*************************************************************************
	> File Name: 169.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月28日 星期五 20时59分33秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 30

struct passwd{
    char ch;
    int num;
} pas[30];
int cnt[MAX_N + 5];

int main() {
    int n, ans = 0;
    char arr[MAX_N + 5];
    scanf("%d", &n);
    getchar();
    for (int i = 1; i <= n; i++) {
        scanf("%c", &(pas[i].ch));
        getchar();
        scanf("%d", &(pas[i].num));
        getchar();
    }

    scanf("%s", arr);
    for (int i = strlen(arr) - 1; i >= 0; i--) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            for (int j = 1; j <= n; j++) {
                if (pas[j].ch == arr[i]) {
                    ans += pas[j].num;
                    break;
                }
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
