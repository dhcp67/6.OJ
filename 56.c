/*************************************************************************
	> File Name: 56.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月27日 星期四 18时15分28秒
 ************************************************************************/

#include <stdio.h>

int fac(int n, int m) {
    int s = 1;
    for(int i = n; i >= m; i--) {
        s *= i;
    }
    return s;
}
int main() {
    int x, y;
    int ans = 0;
    scanf("%d%d", &x, &y);
    for (int i = 1; i < x % 10; i++) {
        if (y < fac(x % 10, i + 1)) {
            ans = ans * 10 + i;
            continue;
        }
        while(y > fac(x % 10, x + 1)) {
            y -= fac(x % 10, x + 1);
        }
        ans = ans * 10 + i + 1;
    }
    printf("%d\n", ans);
    return 0;
}
