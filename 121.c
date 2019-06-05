/*************************************************************************
	> File Name: 121.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月05日 星期三 20时51分42秒
 ************************************************************************/

#include <stdio.h>

int main () {
    char m, h;
    scanf("%c", &m);
    getchar();
    scanf("%c", &h);
    int i = 0;
    if (m == 'O'){
        if(h == 'Y') {i = 1;}
        else if(h == 'H') {
            i = 2;
        }
    }else if(m == 'Y') {
        if(h == 'O') {
            i = 2;
         }
        else if(h == 'H') {
            i = 1;
        }
    }else if(m == 'H') {
        if(h == 'O') {i = 1;}
        else if(h == 'Y') {i = 2;
        }
    }
    printf("%d\n", i);
    if(i == 0) printf("TIE\n");
    else if(i == 1) printf("MING\n");
    else if(i == 2) printf("LI\n");
    return 0;
}
