/*************************************************************************
	> File Name: 194.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月06日 星期六 22时07分14秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 100000
int arr[MAX_N + 5] = {0};

int main() {
    int n, s;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &s);
    int ret = 0;
    for (int i = 0; i < n; i++) {
        int ans = s - arr[i];
        int left = 0, right = n - 1;
        while (1) {
            int mid = (left + right) / 2;
            if (left > right) break;
            if (ans == arr[mid]) {
                ret = 1;
                break;
            }
            if (arr[mid] > ans) right = mid - 1;
            else left = mid + 1;
        }
        if (ret) break;
    }
    ret ? printf("Yes\n") : printf("No\n");
    return 0;
}
