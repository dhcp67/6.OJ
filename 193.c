/*************************************************************************
	> File Name: 193.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月06日 星期六 22时01分17秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 100000


int main() {
    int a[MAX_N] = {0};
    int n, k, s;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d%d", &k, &s);
    int ret = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] + k == s) {
            ret = 1;
            break;
        }
    }
    ret ? printf("YES\n") : printf("NO\n");
    return 0;
}
