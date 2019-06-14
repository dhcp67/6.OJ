/*************************************************************************
	> File Name: 155.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月14日 星期五 21时28分03秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, m = 3, s = 0, ret = 2;
    scanf("%d", &n);
    for(int i = n; i > 0; i--) {
        printf("%d\n", m);
        s += m;
        m += ret;
        ret += 2;
    }
    printf("%d\n", s);
    return 0;
}
