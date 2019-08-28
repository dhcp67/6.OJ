/*************************************************************************
	> File Name: 157.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月14日 星期五 22时05分00秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, ret = 0;
    scanf("%d", &n);
    int min = n;
    char word = 'A';
    for(int i = 1; i <= 2 * n - 1; i++) {
        for(int j = 0; j < ret; j++) {
            printf(" ");
        }
        for(int j = 1; j <= 2 * min - 1; j++) {
            printf("%c", word);
            if (j < min) {
                word++;
            } else if(j != 2 * min -1) 
            word--;
        }
        printf("\n");
        if(i < n) {
            ret++;
            word++;
            min--;
        } else {
            ret--;
            word--;
            min++;
        }
    }
    return 0;
}
