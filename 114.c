/*************************************************************************
	> File Name: 114.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月05日 星期三 20时15分19秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main () {
    char x;
    scanf("%c", &x);
    if (x == 'h') printf("He\n");
    else if(x == 'l') printf("Li\n");
    else if(x == 'c') printf("Cao\n");
    else if(x == 'd') printf("Duan\n");
    else if(x == 'w') printf("Wang\n");
    else  printf("No Here\n");
    return 0;
}
