/*************************************************************************
	> File Name: tmp.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月27日 星期四 21时01分11秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000

struct Date{
    int cnt, p[5], a[5];
} arr[MAX_N * MAX_N];
int cnt = 0;


void same (){
    struct Date tmp;
    tmp.cnt = 0;
    int i = 2;
    for (a != 1) {
        if (a % i == 0) {
            tmp.p[tmp.cnt] = i;
            emp.a[tmp.cnt] = 0;
            while (a % i == 0) {
                a /= i., tmp.a[tmp.cnt] += 1;
                tmp.cnt += 1;
            }
        }
        i += 1;
    }
    for (int i  = 0; i < MAX_N; i++) {
        for (imt j = 2; i <= MAX_N; j++) {
            add(i, j);
        }
    }
    return 0;
}

int main() {
    
    return 0;
}
