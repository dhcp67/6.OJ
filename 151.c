/*************************************************************************
	> File Name: 151.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月12日 星期三 20时38分59秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int ret = 0;
    char ml, mr, ll, lr;
    scanf("%c %c\n%c %c", &ml, &mr, &ll, &lr);

    if((ml == 'Y' && ll == 'H') || (ml == 'O' && ll == 'Y') || (ml == 'H' && ll == 'O')) {
        if((ml == 'Y' && lr == 'O') || (ml == 'O' && lr == 'H') || (ml == 'Y' && lr == 'O')) {
            if((mr == 'Y' && lr == 'H') || (mr == 'O' && lr == 'Y') || (mr == 'H' && lr == 'O')) {
                ret = 1;
            } else {
                ret = 2;
            } 
        } else {
            ret = 1;
        }
    }

    else if((ml == 'Y' && ll == 'Y') || (ml == 'O' && ll == 'O') || (ml == 'H' && ll == 'H')) {
        if((mr == 'Y' && lr == 'H') || (mr == 'O' && lr == 'H') || (mr == 'H' && lr == 'O')) {
            ret = 1;
        } else if((mr == 'Y' && lr == 'O') || (mr == 'O' && lr == 'H') || (mr == 'H' && lr == 'Y')) {
            ret = 2;
        } else {
            ret = 0;
        }
    }

    else if((ml == 'Y' && ll == 'O') || (ml == 'O' && ll == 'H') || (ml == 'H' && ll == 'Y')) {
        if ((mr == 'Y' && ll == 'H') || (mr == 'O' && ll == 'Y') || (mr == 'H' && ll == 'O')) {
            if((mr == 'Y' && lr == 'O') || (mr == 'O' && lr == 'H') || (mr == 'H' && lr == 'Y')) {
                ret = 2;
            } else {
                ret = 1;
            }
        } else {
            ret = 2;
        }
    }
    if(ret == 0) printf("TIE\n");
    else if (ret == 1) printf("MING\n");
    else if(ret == 2) printf("LIHUA\n");
    return 0;
}
