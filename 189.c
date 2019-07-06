/*************************************************************************
	> File Name: 189.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月06日 星期六 15时38分10秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000000
int arr[MAX_N + 5] = {0};
int tmp[MAX_N + 5] = {0};

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i <= k; i++) {
        scanf("%d", &tmp[i]);
    }
    for (int i = 1; i <= k; i++) {
        int left = 1, right = n;
        int mid = (left + right) / 2;
        while (1) {
            if (arr[mid] == tmp[i]) {
                if (i != 1) printf(" ");
                printf("%d", mid);
                break;
            } else if (left > right) {
                if (i != 1) printf(" ");
                printf("0");
                break;
            }
            if (arr[mid] > tmp[i]) right = mid - 1;
            else left = mid + 1;
            mid = (left + right) / 2;
        }
    }
    printf("\n");
    return 0;
}
