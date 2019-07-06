/*************************************************************************
	> File Name: 187.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月06日 星期六 08时53分27秒
 ***********************************************************************/

#include <stdio.h>
#define MAX_N 100

long long cnt[MAX_N + 5] = {0};

int s = 0;

void move(int n, int x, int y) {
    //printf("%d %d %d\n", n, x, y);
    s += n;
}

int hanno(int n, int one, int two, int three) {
    s += n;
    if (n == 1) {
        //move(n, one, three);
        cnt[1] = 1;
        return 1;
    }
    //move(n - 1, one, two);
    //move(n - 1, two, three);
    long long ret;
    if (cnt[n]) {
        ret = cnt[n];
    } else {
        ret = hanno(n - 1, one, three, two);
        ret += hanno(n - 1, one, three, two);
        //cnt[n] = ret;
    }
    return 1 + ret;
}

int main() {
    int n;
    int one = 1, two = 2, three = 3;
    scanf("%d", &n);
    long long ans = hanno(n, one, three, two);
    printf("%lld %d\n", ans, s);
    return 0;
}
