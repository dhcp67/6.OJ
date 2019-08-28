/*************************************************************************
	> File Name: 140.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 16时31分11秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ret = 1;
    int cnt = n - 1;
    char word = 'A';
    for (int i = 1; i <= 2 * n - 1; i++) {
        for(int j = 1; j <= cnt; j++) {
            printf(" ");
        }
        for(int j = 1; j <= ret; j++) {
            printf("%c", word);
        }
        if(i < n) {
            ret += 2;
            cnt--;
            word++;
        } else {
            ret -= 2;
            cnt++;
            word--;
        }
        printf("\n");
    }
    return 0;
}
