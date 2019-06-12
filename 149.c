/*************************************************************************
	> File Name: 149.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 20时15分40秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char arr[55] = {0};
    scanf("%[^\n]", arr);
    int s = 0;
    for(int i = strlen(arr) - 1; i >= 0; i--) {
        if(arr[i] == ' ') break;
        printf("%c\n", arr[i]);
        s++;
    }
    printf("%d\n", s);
    return 0;
}
