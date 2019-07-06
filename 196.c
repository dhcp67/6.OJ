/*************************************************************************
	> File Name: 196.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月06日 星期六 23时31分51秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 50
int ans[MAX_N + 5] = {0};

int step(int n) {
    if (ans[n]) return ans[n];
    ans[n] = step(n - 2) + step(n - 3);
    return ans[n];
}

int main() {
    ans[1] = ans[2] = ans[3] = ans[4] = 1;
    ans[5] = ans[6] = 2;
    int n;
    scanf("%d", &n);
    int ans = step(n);
    printf("%d\n", ans);
    return 0;
}
