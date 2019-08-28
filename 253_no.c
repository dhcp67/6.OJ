/*************************************************************************
	> File Name: 253.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月29日 星期六 18时28分02秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000
struct cow{
    int l;
    int r;
} num[MAX_N + 5];

struct sumshine{
    int x;
    int n;
} sum[MAX_N + 5];

void sorted(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - 1; j++ ) {
            if (num[j].r > num[j + 1].r) {
                int tmp = num[j].r;
                int tmp2 = num[j].l;
                num[j].r = num[j + 1].r;
                num[j].l = num[j + 1].l;
                num[j + 1].r = tmp;
                num[j + 1].l = tmp2;
            }
        }
    }

}

void sortsum(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - 1; j++ ) {
            if (sum[j].x > sum[j + 1].x) {
                int tmp = sum[j].x;
                int tmp2 = sum[j].n;
                sum[j].x = sum[j + 1].x;
                sum[j].n = sum[j + 1].n;
                sum[j + 1].x = tmp;
                sum[j + 1].n = tmp2;
            }
        }
    }

}

int main() {
    int c, l, ans = 0;
    scanf("%d%d", &c, &l);
    for(int i = 0; i < c; i++) {
        scanf("%d%d", &num[i].l, &num[i].r);
    }
    for (int i = 0; i < l; i++) {
        scanf("%d%d", &sum[i].x, &sum[i].n);
    }
    sorted(c);
    sortsum(l);
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            
        }
    }
    return 0;
}
