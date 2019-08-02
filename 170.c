/*************************************************************************
	> File Name: 170.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月04日 星期四 23时26分49秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX_N 1000
char publ[] = "Ban_smoking";
char sub[] = "No_smoking";

void strreplace(char *s, char *a, char *b) {
    int len = strlen(s);
    int alen = strlen(a);
    int blen = strlen(b);
    int lef = 0, right = 0;
    char temp[MAX_N] = {0};
    int atex = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == a[0]) {
            int ret = i;
            lef = i;
            for (int j = 0; j < alen; j++) {
                if (a[j] != s[ret++]) {
                    break;
                }
                if (j == alen - 1) {
                    atex = 1;
                    right = ret;
                }
            }
        }
        if (atex) break;
        temp[i] = s[i];
    }
    strcat(temp, b);
    if (atex) {
        for (int i = right, j = strlen(temp); i <= len; j++, i++) {
            temp[j] = s[i];
        }
        strcpy(s, temp);
    }
} 

int main() {
    int n;
    scanf("%d", &n);
    char buff[MAX_N][MAX_N] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%s", buff[i]);
    }
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            strreplace(buff[i], publ, sub);
        }
        printf("%s\n", buff[i]);
    }
    return 0;
}
