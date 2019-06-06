/*************************************************************************
	> File Name: 135.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月06日 星期四 19时18分32秒
 ************************************************************************/

#include <stdio.h>

int pd(int y) {
    int ret = 0;
    if((y % 100 == 0 && y % 400 == 0) || (y % 100 != 0 && y % 4 == 0)) ret = 1;
    return ret;
}

int main() {
    int x, y, m, d, s = 0;
    int mo[15] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    scanf("%d%d%d%d", &x, &y, &m, &d);
    //printf("%d %d %d %d\n", x, y, m ,d);
    int ret = 0;
    while((++ret) < m) {
        s += mo[ret];
        if ((pd(y) && m > 2)) s+= 1;
    }
    //printf("s = %d\n",s);
    s += x + d;
    //printf("s = %d\n",s);
    ret = pd(y);
    if(pd(y) && s > 366) {
        s -= 366;
        y += 1;
        ret = 1;
    } else if (!pd(y) && s > 365) {
        s -= 365;
        y += 1;
        ret = 0;
    }
    if(pd(y) && s > 366) {
        s -= 366;
        y += 1;
        ret = 1;
    } else if (!pd(y) && s > 365) {
        s -= 365;
        y += 1;
        ret = 0;
    }
    ret = pd(y);
    //printf("s = %d<<--\n",s);
    m = 0;
    int cnt = 1;
    while(s > 0) {
        m++;
        d = s;
        s -= mo[cnt];
        //printf("s = %d  mo = %d\n", s, mo[cnt]);
        if(s) {
            if(cnt == 2 && ret) {
                if(!(s--)) {
                    m--;
                    d = s;
                    break;
                }
            }
        } else {
            d = s;
            break;
        }
        cnt++;
    }
    printf("%d %d %d\n", y, m, d);
    return 0;
}
