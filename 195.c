/*************************************************************************
	> File Name: 195.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月06日 星期六 22时20分36秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 100000

int a[MAX_N + 5] = {0};
int q[MAX_N + 5] = {0};
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &q[i]);
    }
    for (int i = 0; i < m; i++) {
        if (i) printf(" ");
        int left = 0, right = n - 1;
        int ans = a[0];
        while (left <= right) {
            int mid = (left + right) / 2;
            if (q[i] > a[mid]) {
                ans = a[mid];
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        printf("%d", ans);
    }
    return 0;
}
