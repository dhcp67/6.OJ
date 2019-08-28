/*************************************************************************
	> File Name: 181.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月05日 星期五 21时53分23秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 1024

char arr[MAX_N + 5] = {0};

int main() {
    int ret = 'a' - 'A';
    scanf("%[^\n]", arr);
    for (int i = strlen(arr) - 1; i >= 0; i--) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] -= ret;
        } else if (arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] += ret;
        }
    }
    printf("%s\n", arr);
    return 0;
}
