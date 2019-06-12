/*************************************************************************
	> File Name: 147.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 20时05分48秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char arr[1005] = {0};
    scanf("%s", arr);
    int num = arr[strlen(arr) - 1] - '0';
    num % 2 ? printf("NO\n") : printf("YES\n");
    return 0;
}
