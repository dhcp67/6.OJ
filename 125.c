/*************************************************************************
	> File Name: 125.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月06日 星期四 19时09分02秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    int h, m, s, t;
    int ht, mt, st, ss;
    double percentage;
    char time[10] = {0};
    scanf("%d%d%d%d", &h, &m, &s, &t);
    ss = h * 3600 + m * 60 + s + t;
    st = ss % 60;
    ht = ss / 3600;
    mt = ss % 3600 / 60;
    if(ht <= 11) {
        percentage = 86400.0 / t;
        strcpy(time, "am");
    } else {
        if (ht > 12 && ht < 24) {
            percentage = t / 86400.0;
            ht -= 12;
            strcpy(time, "pm");
        }else {
            percentage = t / 86400.0 * 2;
            ht -= 24;
            if (ht == 0) {
                strcpy(time, "pm");
                ht = 12;
            }else{
                strcpy(time, "am");
            }
        }
    }
    printf("%d:%d:%d%s\n%.2lf\%\n", ht, mt, st, time, percentage * 100);
    return 0;
}
