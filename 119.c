/*************************************************************************
	> File Name: 119.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月10日 星期一 16时38分39秒
 ************************************************************************/

#include <stdio.h>


int main() {
    int mo[20] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m, d, ly, ny, lm, nm, yester, tomorr;
    scanf("%d%d%d", &y, &m, &d);
    if(d == 1) {
        if (m == 1) {
            lm = 12;
            ly = y - 1;
            yester = mo[12];
        } else if (m == 3) {
            if((y % 100 == 0 && y % 400 == 0) || (y % 100 != 0 && y % 4 == 0)) {
                lm = m - 1;
                ly = y;
                yester = 29;
            }else {
                lm = m - 1;
                ly = y;
                yester = 28;
            }
        }
    }else {
        lm = m;
        ly = y;
        yester = d - 1;
    }
    if(m  == 2) {
        if((y % 100 == 0 && y % 400 == 0) || (y % 100 != 0 && y % 4 == 0)) {
            if(d == 29) {
                tomorr = 1;
                nm = m + 1;
                ny = y;
            }else {
                tomorr = d + 1;
                nm = m;
                ny = y;
            }
        }else {
            if(d == 28) {
                tomorr = 1;
                nm = m + 1;
                ny = y;
            }else {
                tomorr = d + 1;
                nm = m;
                ny = y;
            }
            
        }
    } else if (m == 12 && d == 31) {
        tomorr = 1;
        ny = y + 1;
        nm = 1;
    } else if(mo[m] == d) {
        tomorr = 1;
        ny = y;
        nm = m;
    } else {
        ny = y;
        nm = m;
        tomorr = d + 1;
    }

    printf("%d %d %d\n", ly, lm, yester);
    printf("%d %d %d\n", ny, nm, tomorr);
    return 0;
}
