/*************************************************************************
	> File Name: 168.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月28日 星期五 19时49分55秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 100
char word[MAX_N + 5][MAX_N + 5];
char swap[MAX_N + 5];

int main() {
    int N;
    scanf("%d", &N);
    int ret = 'A' - 'a';
    int cnt = 0;
    while(N != cnt) {
        scanf("%s", word[cnt]);
        getchar();
        int len = strlen(word[cnt]);
        for (int i = 0; i < len; i++) {
            if (i == 0 && word[cnt][i] >= 'a' && word[cnt][i] <= 'z') {
                word[cnt][i] += ret;
            } else if (i != 0 && word[cnt][i] >= 'A' && word[cnt][i] <= 'Z') {
                word[cnt][i] -= ret;
            }
        }
        cnt++;
    }
    int temp = N;
    while (N--) {
        int tmp = N;
        cnt = 0;
        strcpy(swap, word[0]);
        for (int j = 0; j < tmp; j++) {
            if (strcmp(word[j], word[j + 1]) > 0) {
                strcpy(swap, word[j]);
                strcpy(word[j], word[j + 1]);
                strcpy(word[j + 1], swap);
            }
        }
    }
    for (int i = 0; i < temp; i++) {
        printf("%s\n", word[i]);
    }
    return 0;
}
