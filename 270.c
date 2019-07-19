/*************************************************************************
	> File Name: 270.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月17日 星期三 15时40分49秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX_N 300000
long long q[MAX_N + 5], head, tail;
long long arr[MAX_N + 5];

int main() {
    long long n, m, ans;
    scanf("%lld%lld", &n, &m);
    for (long long i = 1; i < n; i++) {
        scanf("%lld", &arr[i]);
        arr[i] += arr[i - 1];
    }
    head = tail = 0;
    q[tail++] = 0;
    ans = arr[1];
    for (long long i = 1; i <= n; i++) {
        ans = (arr[i] > arr[i] - arr[q[head]] ? arr[i] : arr[i] - arr[q[head]]);
        while (tail - head && arr[q[tail - 1]] >= arr[i]) tail--;
        q[tail++] = i;
        if (q[head] == i - m) {
            head++;
        }

    }
    printf("%lld\n", ans);
    
    return 0;
}
