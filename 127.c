/*************************************************************************
	> File Name: 127.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月10日 星期一 21时36分25秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int x, n;
    scanf("%d%d", &x, &n);
    int s = x;
    for(int i = 0; i < n; i++) {
        s = s * (1 + 0.06);
    }
    printf("%d\n", s);
    return 0;
}
