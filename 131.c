/*************************************************************************
	> File Name: 131.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 13时05分34秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int min = 10000;
    int max = 0;
    int n, x;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &x);
        if(min > x) min = x;
        if(max < x) max = x;
    }
    printf("%d\n", max - min);
    return 0;
}
