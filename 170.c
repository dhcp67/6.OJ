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

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char buff[MAX_N] = {0};
        scanf("%s", buff);
        char *str = strreplace(buff, publ, sub);
        printf("%s\n", str);
    }
    return 0;
}
