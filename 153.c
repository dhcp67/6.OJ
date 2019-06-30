/*************************************************************************
	> File Name: 153.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月13日 星期四 12时49分14秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    if (m < 3){
        m += 12;
        y -= 1;
    }
   int j = y / 100 ;//+ 1;
    int k = y % 100;
    int h = (d + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
    switch(h){
        case 0:
        printf("6\n");
        break;
        case 1:
        printf("7\n");
        break;
        case 2:
        printf("1\n");
        break;
        case 3:
        printf("2\n");
        break;
        case 4:
        printf("3\n");
        break;
        case 5:
        printf("4\n");
        break;
        case 6:
        printf("5\n");
        break;
    }
    return 0;
}
