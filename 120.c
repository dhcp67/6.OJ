/*************************************************************************
	> File Name: 120.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月05日 星期三 20时35分33秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int y, m, r;
    scanf("%d", &y);
    scanf("%d", &m);
    scanf("%d", &r);
    if((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m ==12) && r <= 31 && r > 0) {
        printf("YES\n");
    } else if((m == 4 || m == 6 || m == 9 || m == 11) && r <= 30  && r > 0) {
        printf("YES\n");
    } else if (m == 2) {
        if(((y % 100 == 0 && y % 400 == 0) || (y % 100 != 0 && y % 4 == 0)) && r <= 29 && r > 0) printf("YES\n");
        else if(r <= 28 && r > 0)printf("YES\n");
        else printf("NO\n");
    } else printf("NO\n");
    return 0;
}
