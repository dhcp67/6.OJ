/*************************************************************************
	> File Name: 182.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月05日 星期五 21时59分10秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int tmp;
        scanf("%d", &tmp);
        if (ans < tmp) ans = tmp;
    }
    printf("%d\n", ans);
    return 0;
}
