/*************************************************************************
	> File Name: 183.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月05日 星期五 22时08分13秒
 ************************************************************************/

#include <stdio.h>

int recursion(int n) {
    if (n <= 0) {
        return 0;
    } 
    if (n == 1) return 1;
    if (n > 1 && n % 2 == 0) {
        return 3 * recursion(n / 2) -1;
    }
    return 3 * recursion((n + 1) / 2) - 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int ans = recursion(n);
    printf("%d\n", ans);
}
