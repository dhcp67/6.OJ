/*************************************************************************
	> File Name: 171.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月05日 星期五 11时46分43秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_N 1000
char arr[MAX_N + 5] = {0};
int num[MAX_N + 5] = {0};

int main() {
    scanf("%s", arr);
    for (int i = strlen(arr), j = strlen(arr) - 1; j >= 0; j--, i--) {
        num[i] = arr[j] - '0';
    }
    num[0] = strlen(arr);
    int ret = (num[0] % 2 ? num[0] / 2 + 1: num[0] / 2);
    for (int i = 1, j = 1; i <= num[0]; i++){
        printf("%d", num[j]);
        //if (i >= (int)ceil(num[0] / 2)) {
        if (i >= ret) {
            if (ret && num[0] % 2 == 0) {
                ret = 0;
                j++;
            }
            j--;
        }
        else j++;
    }
    printf("\n");
    return 0;
}
