/*************************************************************************
	> File Name: 110.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月07日 星期五 23时13分37秒
 ************************************************************************/

#include <stdio.h>

int main() {
    double ret = 1.00417;
    double s;
    scanf("%lf", &s);
    double cnt = 0.0;
    double digit = 0;
    for(int i = 0; i < 6; i++) {
        cnt = (cnt + s) * ret;
    }
    printf("$%.2lf\n", cnt);
    return 0;
}
