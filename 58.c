/*************************************************************************
	> File Name: 58.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月29日 星期六 17时37分17秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) (((a) > (b)) ? a : b) 

#define Plog(frm, arg...) {\
    printf("[ %s : %d ] ",__func__, __LINE__ + 6 );\
    printf(frm, arg);\
    printf("\n");\
}; 
void haizei_test() {
    int a = 6;
    Plog("%d", MAX(2, 3));
    Plog("%d", 5 + MAX(2, 3));
    Plog("%d", MAX(2, MAX(3, 4)));
    Plog("%d", MAX(2, 3 > 4 ? 3 : 4));
    Plog("%d", MAX(a++, 6));
    Plog("a value = %d", a);
}

int main() {
    haizei_test();
    return 0;
}
