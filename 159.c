/*************************************************************************
	> File Name: 159.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月15日 星期六 10时45分18秒
 ************************************************************************/

#include <stdio.h>

void output(char word, int ind, int num) {
    if(ind == 0) {
        return;
    }
    int ret = 0;
    for(int i = 0; i < num; i++) {
        printf(" ");
    }
    for(int i = ind * 2 - 1; i > 0; i--) {
        printf("%c", word);
        if (i == 1) break;
        if (!ret && word == 'A') {
            ret = 1;
            word--;
        }
        if(!ret) {
            word--;
        } else {
            word++;
        }
    }
    printf("\n");
    output(word, --ind, ++num);
}

int main() {
    char word;
    scanf("%c", &word);
    output(word, word - 'A' + 1,0);
    return 0;
}
