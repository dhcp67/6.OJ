/*************************************************************************
	> File Name: 117.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月05日 星期三 20时23分17秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int c;
    c = a;
    int b = 0;
    while(a) {
        b = b * 10 + a % 10;
        a = a / 10;
    }
    if(b == c) printf("YES");
    else printf("NO");
    return 0;
}
