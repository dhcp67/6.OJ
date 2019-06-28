/*************************************************************************
	> File Name: EP29.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月27日 星期四 20时32分52秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX_N 100
int f[MAX_N + 5][MAX_N + 5];

struct Date{
    int a, b;
}; 

int main() {
    for (int i = 2; i * i<= MAX_N; i ++) {
        for (int j = 2; j <= MAX_N; j++) {
            if (f[i][j]) continue;
            for (int k = 2; k *k <= j; k++) {
                int a1 = k;
                int a2 = j / k;
                if (1.0 * a1 * log10(i) <= 2) {
                    f[(int)pow(i, a1)][a2] = 1;
                }
                if (1.0 * a1 * log10(i) <= 2) {
                    f[(int)pow(i, a1)][a2] = 1;
                }
                //f[i^a1][a2] = 1;
                //f[i^a2][a1] = 1;
            }
        }
    }
    int sum = 0;
    for (int i  = 2;i <= MAX_N; i++) {
        for (int j = 2; j <= MAX_N; j++) {
            sum += (f[i][j] == 0);
        }
    }
    printf("%d\n", sum);
    return 0;
}
