/*************************************************************************
	> File Name: 166.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月26日 星期三 19时26分53秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 20000

char A[MAX_N + 5];
char B[MAX_N + 5];
char C[MAX_N + 5];

int main() {
    int n;
    scanf("%s", A);
    getchar();
    scanf("%d", &n);
    scanf("%s", B);
    int L = strlen(A);
    int L1 = strlen(B);
    if (L > 100) printf("100\n");
    else printf("%d\n", L1);
    for (int i = 0; i < n - 1; i++) {
        C[i] = A[i];
    }
    strcat(C, B);
    int ret = strlen(C);
    for (int i = n - 1; i < L; i++) {
        C[ret++] = A[i];
    }
    printf("%s\n", C);
    ret = strlen(C);
    int cnt = 1;
    for (int i = ret - 1; i > 0; i--) {
        if (C[i] == 'x') {
            printf("%d\n", cnt);
            break;
        }
        cnt++;
    }
    return 0;
}
