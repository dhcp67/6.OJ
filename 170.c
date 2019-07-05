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

void swap(char *arr, int pos, int size) {
    int j = 0;
    int len = strlen(publ);
    for (int i = pos; i < size; i++) {
        if (i == pos) {
            arr[i] = 'N';
            continue;
        }
        else if (i == pos + 1) {
            arr[i] = 'o';
            continue;
    }

        else {
            if (i == size - 1) {
                arr[i] = '\0';
                break;
            }
            arr[i] = arr[i + 1];
        }
        j++;

    } 
    return ;
}
int main() {
    int len = strlen(publ);
    char arr[MAX_N + 5][MAX_N + 5];
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++){
        scanf("%s", arr[i]);
        getchar();
    }
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < strlen(arr[i]); j++) {
            if (publ[cnt] == arr[i][j]) {
                cnt++;
                if (cnt == len) {
                    swap(arr[i], j - len + 1, strlen(arr[i]));
                    cnt = 0;
                }
            } else {
                cnt = 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
    return 0;
}
