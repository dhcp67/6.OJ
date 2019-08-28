/*************************************************************************
	> File Name: 175.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月05日 星期五 18时52分25秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 30
int ans[MAX_N + 5];

int main() {
    int n, you = 0, liang = 0, zhong = 0, cha = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ans[i]);
    }
    for (int i = 0; i < n; i++) {
        if (ans[i] > 89) you++;
        else if (ans[i] >= 80 && ans[i] <= 89) liang++;
        else if (ans[i] >= 60 && ans[i] <= 79) zhong++;
        else cha++;
    }
    printf("You %d\nLiang %d\nZhong %d\nCha %d\n", you, liang, zhong, cha);
    return 0;
}
