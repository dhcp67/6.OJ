/*************************************************************************
	> File Name: 201.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月02日 星期五 16时29分53秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define MAX_N 1000

int insert(int *num, int val, int cnt) {
    if (!cnt) {
        num[cnt] = val;
        return cnt + 1;
    }
    if (val < num[0]) {
        for (int i = cnt; i > 0; i--) {
            num[i] = num[i - 1];
        }
        num[0] = val;
        return cnt + 1;
    }
    if (val > num[cnt - 1]) {
        num[cnt] = val;
        return cnt + 1;
    }
    for (int i = 0; i < cnt - 1; i++) {
        if (val > num[i] && val < num[i + 1]) {
            for (int j = cnt; j > i + 1; j--) {
                num[j] = num[j - 1];
            }
            num[i + 1] = val;
            return cnt + 1;
        }
    }
    return cnt;
}
int main() {
    int num[MAX_N + 5] = {0};
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int tmp;
        scanf("%d", &tmp);
        cnt = insert(num, tmp, cnt);
    }
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++) {
        if (i) printf(" ");
        printf("%d", num[i]);
    }
    return 0;
}
