/*************************************************************************
	> File Name: 156.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月14日 星期五 21时49分08秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int isprime(int num) {
    int ret = 1;
    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            ret = !ret;
            break;
        }
    }
    return ret;
}

int my_sqrt(int num) {
    return ((int)pow(num, 0.5) == ceil(pow(num, 0.5)));
}

int main() {
    int a, b, ret = 0, s = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (isprime(i) && my_sqrt(i / 100) && my_sqrt(i % 100)) {
            if(ret) printf(" ");
            printf("%d", i);
            s++;
            ret = 1;
        }
    } 
    printf("\n%d\n", s);
    return 0;
}
