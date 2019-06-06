/*************************************************************************
	> File Name: 134.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月06日 星期四 20时56分01秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int ret = 0;
    for(int i = a; i <= b; i++) {
        if(ret) printf(" ");
        ret++;
        if(!(i % 11)) {
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
