/*************************************************************************
	> File Name: 187.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月06日 星期六 08时53分27秒
 ***********************************************************************/

#include <stdio.h>
#define MAX_N 100

long long cnt[MAX_N + 5] = {0};
long long num[MAX_N + 5] = {0};

long long s = 0;

long long add(int n) {
    if (n == 1) {
        return n;
    }
    num[n] = n + 2 * add(n - 1);
    return num[n];
}

long long hanno(int n, int one, int two, int three) {
    s += n;
    if (n == 1) {
        cnt[1] = 1;
        return 1;
    }
    long long ret;
    if (cnt[n]) {
        ret = cnt[n];
        if (num[n]) s += num[n];
        else {
            num[n] = 2 * add(n - 1);
            s += num[n];
        }
    } else {
        ret = hanno(n - 1, one, three, two);
        ret += hanno(n - 1, one, three, two);
        cnt[n] = ret;
    }
    return 1 + ret;
}

int main() {
    int n;
    int one = 1, two = 2, three = 3;
    scanf("%d", &n);
    long long ans = hanno(n, one, three, two);
    printf("%lld %lld\n", ans, s);
    return 0;
}

