/********************************************************:Z	> Mail: 318082789@qq.com
	> Created Time: 2019年08月02日 星期五 15时53分47秒
 ************************************************************************/

#include <stdio.h>

void contl(int *a, int *b) {
    int c = *a + *b;
    *a = *b;
    *b = c;
}

int main() {
    int N;
    int a = 3, b = 4;
    double ans = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        contl(&a, &b);
        ans += a * 1.0 / b;
    }
    printf("%d/%d\n%.2lf\n", a, b, ans);
    return 0;
}
