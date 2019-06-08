/*************************************************************************
	> File Name: test.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月05日 星期三 23时31分27秒
 ************************************************************************/

#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n);
    double l = n;
    for(int i = 0;i < 6; i++) {
        l =  l * (1.00417);
        if(i == 5) printf("$%.2lf\n", l);
        l = n + l;

    }

}
