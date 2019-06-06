/*************************************************************************
	> File Name: 122.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月06日 星期四 18时34分14秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    int t, s, m, h;
    scanf("%d", &t);
    s = t % 60;
    m = t / 60;
    h = m / 60;
    m = m % 60;
    char st[100] = {0};
    char mt[100] = {0};
    char ht[100] = {0};
    char time[20] = {0};
    if (h < 12) {
        strcpy(time, "am");
    } else if(h == 12) {
        strcpy(time,"midnoon");
    } else {
        strcpy(time,"pm");
        h = h % 12;
    }
    if(h < 10) sprintf(ht,"0%d", h);
    else sprintf(ht,"%d", h);
    if(m < 10) sprintf(mt,"0%d", m);
    else sprintf(mt,"%d", m);
    if(s < 10) sprintf(st,"0%d", s);
    else sprintf(st, "%d", s);
    printf("%s:%s:%s %s", ht, mt, st, time);
    return 0;
}
