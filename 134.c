/*************************************************************************
	> File Name: 134.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月06日 星期四 20时56分01秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int a, b, num[100] = {0};
    scanf("%d%d", &a, &b);
    int ret = 0;
    for(int i = a; i <= b; i++) {
        if (i % 11 == 0) {
            num[ret] = i;
            ret++;
        }
    }
    int i = 0;
    while(num[i++]) {
        if(i != 1) printf(" ");
        printf("%d", num[i - 1]);
    }
    printf("\n");
    return 0;
}
