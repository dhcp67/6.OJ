/*************************************************************************
	> File Name: 118.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月10日 星期一 16时08分10秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char zodiac[20][10] = {0};
    strcpy(zodiac[1], "rat");
    strcpy(zodiac[2], "ox");
    strcpy(zodiac[3], "tiger");
    strcpy(zodiac[4], "rabbit");
    strcpy(zodiac[5], "dragon");
    strcpy(zodiac[6], "snake");
    strcpy(zodiac[7], "horse");
    strcpy(zodiac[8], "sheep");
    strcpy(zodiac[9], "monkey");
    strcpy(zodiac[10], "rooster");
    strcpy(zodiac[12], "dog");
    strcpy(zodiac[12], "pig");
    int year, ret;
    scanf("%d", &year);
    printf("%s\n", !(ret = (year + 9) % 12) ? zodiac[12] : zodiac[ret]);
    return 0;
}
