/*************************************************************************
	> File Name: 173.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月05日 星期五 18时30分17秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 1024

char arr[MAX_N + 5];

int main() {
    int eng = 0, num = 0, blank = 0, oth = 0;
    scanf("%[^\n]", arr);
    for (int i = strlen(arr) - 1; i >= 0; i--) {
        if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')) eng++;
        else if (arr[i] >= '0' && arr[i] <= '9') num++;
        else if(arr[i] == ' ') blank++;
        else oth++;
    }
    printf("%d %d %d %d\n", eng, num, blank, oth);
    return 0;
}
