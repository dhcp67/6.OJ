/*************************************************************************
	> File Name: 54.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月25日 星期二 19时53分16秒
 ************************************************************************/

#include <stdio.h>

int main () {
    int n;
    while (scanf("%d", &n) != EOF) {
        int num1[1000] = {0};
        int num2[1000] = {0};
        num1[0] = num1[1] = 1;
        int sum = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= num1[0]; j++) num1[j] *= i;
            for (int j = 1; j <= num1[0]; j++) {
                if (num1[j] < 10) continue;
                num1[num1[0] + 1] = 0;
                num1[j + 1] += num1[j] / 10;
                num1[j] %= 10;
                num1[0] += (num1[0] == j);
            }
        }
        num2[0] = num2[1] = 1;
        for (int j = 1; j <= num1[0]; j++) {
            if (num1[j] == 0) continue;
            for (int i = 1; i <= num2[0]; i++) num2[i] *= num1[j];
            for (int i = 1; i <= num2[0]; i++) {
                num2[num2[0] + 1] += num2[j] / 10;
                num2[j] %= 10;
                num2[0] += (num2[0] == j);

            }
        }
        for (int i = num2[0]; i >= 1; --i) {
            printf("%d", num2[i]);
        }
    printf("\n");
    }
    return 0;
}
