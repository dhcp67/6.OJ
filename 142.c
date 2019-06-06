/*************************************************************************
	> File Name: 142.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月06日 星期四 21时10分07秒
 ************************************************************************/

#include <stdio.h>

int huiwen(int num) {
    int ret = num;
    int x = 0;
    while(num) {
        x = x * 10 + num % 10;
        num /= 10;
    }
    return (x == ret);
}

int main() {
    int a, b;
    int arr[100000] = {0};
    for(int i = 2; i * i < 100000; i++) {
        for(int j = i;i * j < 100000; j++) {
            arr[i * j] = 1;
        }
    }
    scanf("%d%d", &a, &b);
    int ret = 0;
    for(int i = a; i <= b; i++) {
        if(huiwen(i) && !arr[i]) {
            if(ret) printf(" ");
            ret++;
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
