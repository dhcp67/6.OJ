/*************************************************************************
	> File Name: 167.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月28日 星期五 18时19分45秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_N 2000


char A[MAX_N + 5];
char B[MAX_N + 5];
char C[MAX_N + 5];

int main() {
    int N, L;
    scanf("%s", A);
    getchar();
    scanf("%d", &N);
    scanf("%s", B);
    L = strlen(A);
    int pos_a;
    for (int i = 0; i < L; i++) {
        if (A[i] == 'a') {
            pos_a = i + 1;
            break;
        }
    }
    strncpy(C, A, N - 1);
    strcat(C, B);
    int len_c = strlen(C);
    for (int i = N - 1; i < strlen(A); i++) {
        C[len_c++] = A[i];
    }
    printf("%d\n%d\n%s\n", L, pos_a, C);
    return 0;
}
