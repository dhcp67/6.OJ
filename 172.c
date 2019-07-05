/*************************************************************************
	> File Name: 172.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月05日 星期五 15时09分07秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 1024

int main() {
    char arr[10][MAX_N + 5] = {0};
    char swap[MAX_N + 5] = {0};
    for (int i = 0; i < 10; i++) {
        scanf("%s", arr[i]);
        getchar();
    }
    int ret = 10;
    for (int i = 0; i < 9; i++) {
        ret--;
        for (int j = 0; j < ret; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(swap, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], swap);
            }
            memset(swap, 0, sizeof(swap));
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%s\n", arr[i]);
    }
    return 0;
}
