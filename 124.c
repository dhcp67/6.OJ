/*************************************************************************
	> File Name: 124.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月06日 星期四 18时55分17秒
 ************************************************************************/

#include <stdio.h>

typedef struct person{
    int xl;
    int pm;
    int age;
    int job;
} P;

int main() {
    P p;
    scanf("%d%d%d%d", &p.xl, &p.pm, &p.age, &p.job);
    if((p.pm <= 50 || p.xl > 0) && (p.age <= 25 || p.job >= 5)) {
        printf("ok\n");
    } else printf("pass\n");
    return 0;
}
