/*************************************************************************
	> File Name: 202.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月02日 星期五 16时58分29秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 1000

struct Msg{
    int num;
    int index;
};

void sort(struct Msg *num, int n) {
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (num[j].num > num[j + 1].num) {
                int tmp = num[j].num;
                num[j].num = num[j + 1].num;
                num[j + 1].num = tmp;
                tmp = num[j].index;
                num[j].index = num[j + 1].index;
                num[j + 1].index = tmp;
            }
        }
    }
}

int main() {
    int n;
    struct Msg msg[MAX_N + 5];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &msg[i].num);
        msg[i].index = i + 1;
    }
    sort(msg, n);
    for (int i = 0; i < n; i++) {
        if (i) printf(" ");
        printf("%d", msg[i].index);
    }
    printf("\n");
    return 0;
}
