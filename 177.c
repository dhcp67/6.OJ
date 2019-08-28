/*************************************************************************
	> File Name: 177.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月05日 星期五 19时36分36秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 26
char arr[MAX_N + 5] = {0};

int main() {
    scanf("%s", arr);
    int len = strlen(arr);
    int pos = len - 1;
    for (int  i = 0; i < len; i++) {
        int tmp = pos;
        for (int j = 0; j < len; j++) {
            if (++tmp > len - 1) tmp = 0;
            printf("%c", arr[tmp]);
        }
        printf("\n");
        if ((pos -= 2) < 0) pos = len + pos;
    }
    return 0;
}
