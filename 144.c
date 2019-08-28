/*************************************************************************
	> File Name: 144.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 19时10分54秒
 ************************************************************************/

#include <stdio.h>

int main() {
    char arr[105] = {0};
    scanf("%s", arr);
    int i = 0, s = 0;
    while (arr[i++]) {
        if(arr[i - 1] == 'A') s++;
    }
    printf("%d\n", s);
    return 0;
}
