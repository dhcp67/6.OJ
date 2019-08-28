/*************************************************************************
	> File Name: tmp.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月12日 星期五 10时29分30秒
 ************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX_N 300000
int a[MAX_N + 5] = {0};
int b[MAX_N + 5] = {0};

typedef struct stack{
    int *data;
    int top;
} Sta;

int staa[MAX_N] = {0};
int stab[MAX_N] = {0};

int main() {
    srand(time(0));
    int n = rand() / 100;
    Sta reta = {a, -1};
    Sta retb = {b, -1};
    for (int i = 0; i < n; i++) {
        int ran = rand();
        reta.data[i] = a[i] = ran;
        if (!i) {
            reta.top++;
            retb.data[i] = b[i]=rand();
            retb.top++;
            continue;
        }
    }
    return 0;
}

