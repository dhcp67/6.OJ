/*************************************************************************
	> File Name: 125.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月06日 星期四 19时09分02秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int h, m, s, t;
    int ht, mt, st, ss;
    scanf("%d%d%d%d", &h, &m, &s, &t);
    ss = h * 3600 + m * 60 + s + t;
    st = t % 60;
    mt = m / 60;
    ht = mt / 60;
    return 0;
}
