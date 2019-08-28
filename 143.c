/*************************************************************************
	> File Name: 143.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 17时14分35秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int is_prime(int num) {
    num = num / 100;
    if (num == 0 || num == 1) return 0;
    for (int i = 2; i < num; i++) {
        if(num % i == 0) return 0;
    }
    return 1;
}

int square(int num) {
    num = num % 100;
    if(ceil(pow(num, 0.5)) == floor(pow(num, 0.5))){
        return 1;
    }
    return 0;
}

int is(int num) {
    if(num % 6) return 0;
    if(!is_prime(num)) return 0;
    if(!square(num)) return 0;
    return 1;
}
int main() {
    int a, b, s = 0, ret = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (is(i)) {
            if(ret) printf(" ");
            ret = 1;
            s++;
            printf("%d", i);
        }
    }
    printf("\n%d\n", s);
    return 0;
}
