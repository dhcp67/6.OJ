/*************************************************************************
	> File Name: 141.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月06日 星期四 21时33分40秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int num = 2* n + 1;
    int ret = 0;
    int min = n + 1;
    char word = 'A';
    for (int i = 1; i <= 2 * n + 1; i++) {
        for (int j = 0; j < ret; j++) {
            printf(" ");
        }
        for (int j = 1; j <= num; j++) {
            printf("%c", word);
            if(j < min) word++;
            else if(j != num) word--;
        }
        if(i <= n) {
            num -= 2;
            ret++;
            word++;
            min--;
        } else {
            num += 2;
            ret--;
            word--;
            min++;
        }
        printf("\n");
    }
    return 0;
}
