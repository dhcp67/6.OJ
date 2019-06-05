/*************************************************************************
	> File Name: test.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月05日 星期三 19时58分05秒
 ************************************************************************/

#include <stdio.h>

int main () {
    int y, m;
    scanf("%d",&y);
    scanf("%d",&m);
    if(((y % 100 == 0 && y % 4 == 0 ) || (y % 100 != 0 && y % 4 == 0)) && m == 2) {
        printf("%d\n", 29);        
    } else if(m == 2) printf("%d\n",28);
    else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 ||  m == 12) printf("%d\n", 31);
    else printf("%d\n", 30);
    return 0;
}
