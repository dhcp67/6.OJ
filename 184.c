/*************************************************************************
	> File Name: 183.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月05日 星期五 22时02分15秒
 ************************************************************************/

#include <stdio.h>

int algo(int n) {
    int ans = 1;
    for (int i = 1; i < n; i++) {
        ans = (ans + 1) * 2;
    }
    return ans;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", algo(n));
    return 0;
}
