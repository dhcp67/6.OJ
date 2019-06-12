/*************************************************************************
	> File Name: 148.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 20时11分29秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char arr[55] = {0};
    scanf("%s", arr);
    for(int i = strlen(arr) - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
    printf("\n");
    return 0;
}
