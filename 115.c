/*************************************************************************
	> File Name: 115.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月10日 星期一 10时46分06秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    int bonus = 0;
    if(x == y) bonus = 100;
    else  if(x % 10 == y / 10 && y % 10 == x / 10) bonus = 20;
    else  if(x % 10 == y / 10 || x % 10 == y % 10 || x / 10 == y % 10 || x / 10 == y / 10) bonus = 2;
    printf("%d\n", bonus);
    return 0;
}
