/*************************************************************************
	> File Name: 145.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 19时14分19秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    char max_name[1005] = {0};
    char name[1005] = {0};
    while(N--) {
        scanf("%s", name);
        if(strlen(max_name) < strlen(name)) strcpy(max_name, name);
    }
    printf("%s\n", max_name);
    return 0;
}
