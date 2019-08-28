/*************************************************************************
	> File Name: 146.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 19时28分26秒
 ************************************************************************/

#include <stdio.h>

int main() {
    char arr[55] = {0};
    scanf("%s", arr);
    int i = 0;
    while(arr[i++]) {
        if(arr[i - 1] >= 'a' && arr[i - 1] < 'z') {
            arr[i - 1]++;
            continue;
        }
        if(arr[i - 1] >= 'A' && arr[i - 1] < 'Z') {
            arr[i - 1]++;
            continue;
        }
        if(arr[i - 1] == 'z') arr[i - 1] = 'a';
        if(arr[i - 1] == 'Z') arr[i - 1] = 'A';
    }
    printf("%s\n", arr);
    return 0;
}

