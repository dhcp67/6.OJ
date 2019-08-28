/*************************************************************************
	> File Name: 112.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月10日 星期一 10时39分26秒
 ************************************************************************/

#include <stdio.h>

int main() {
    char str;
    scanf("%c", &str);
    printf("%s\n", str == 'a' ? "It is good": str == 'b' ? "OMG" : "Yes!");
    return 0;
}
