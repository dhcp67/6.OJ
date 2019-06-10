/*************************************************************************
	> File Name: 116.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月10日 星期一 10时56分44秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    int num[10] = {6};
    char str[20] = {0};

    scanf("%d%d%d", &num[1], &num[2], &num[3]);
    if (num[1] > num[2]) {
        num[4] = num[1];
        num[5] = num[2];
    }
    else {
        num[4] = num[2];
        num[5] = num[1];
    }
    if (num[4] < num[3]) {
        num[6] = num[4];
        num[4] = num[3];
    }else num[6] = num[3];
    //printf("%d %d %d\n", num[4], num[5], num[6]);

    if (num[5] + num[6] <= num[4]) strcpy(str,"illegal triangle");
    else if (num[5] * num[5] + num[6] * num[6] > num[4] * num[4]) strcpy(str,"acute triangle");
    else if (num[5] * num[5] + num[6] * num[6] == num[4] * num[4]) strcpy(str, "right triangle");
    else if (num[5] * num[5] + num[6] * num[6] < num[4] * num[4]) strcpy(str, "obtuse triangle");
    printf("%s\n", str);
    return 0;
}
