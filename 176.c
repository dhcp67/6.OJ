/*************************************************************************
	> File Name: 176.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月05日 星期五 19时22分45秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 1000
char arr[MAX_N + 5] = {0};
char ans[MAX_N + 5] = {0};


int main() {
    int n = 0;
    scanf("%[^\n]", arr);
    getchar();
    scanf("%[^\n]", ans);
    int len = strlen(arr);
    int length = strlen(ans);
    for (int i = 0; i < len; i++) {
        if (arr[i] == ans[0]) {
            int tmp = i;
            for(int j = 0;j < length; j++) {
                if (arr[tmp] == ans[j]) {
                    tmp++;
                } else {
                    break;
                }
                if (j == length - 1) n++;
            }
        }
    } 
    printf("%d\n", n);
    return 0;
}
