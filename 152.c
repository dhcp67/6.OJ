/*************************************************************************
	> File Name: 152.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月13日 星期四 12时36分45秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    n += 3;
    switch(n % 7) {
        case 1:
        printf("%s\n", "Monday");
        break;
        case 2:
        printf("%s\n", "Tuesday");
        break;
        case 3:
        printf("%s\n", "Wednesday");
        break;
        case 4:
        printf("%s\n", "Thursday");
        break;
        case 5:
        printf("%s\n", "Friday");
        break;
        case 6:
        printf("%s\n", "Saturday");
        break;
        default:
        printf("%s\n", "Sunday");
    }
    return 0;
}
