/*************************************************************************
	> File Name: 174.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月05日 星期五 18时43分12秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 1000000

char arr[MAX_N + 5] = {0};
char ans[MAX_N + 5] = {0};

int main() {
    scanf("%[^\n]", arr);
    int len = strlen(arr);
    for (int i = 0, j = 0; i < len; i++, j++) {
        if (arr[i] == ' ') {
            ans[j++] = '%';
            ans[j++] = '2';
            ans[j] = '0';
        } else {
            ans[j] = arr[i];
        }
    }
    printf("%s\n", ans);
    return 0;
}
