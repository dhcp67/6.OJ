/*************************************************************************
	> File Name: 103.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月09日 星期日 20时18分34秒
 ************************************************************************/

#include <stdio.h>

int main() {
<<<<<<< HEAD:test.c
    double n;
    scanf("%lf", &n);
    double l = n;
    for(int i = 0;i < 6; i++) {
        l =  l * (1.00417);
        if(i == 5) printf("$%.2lf\n", l);
        l = n + l;

    }

=======
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%s\n", a % b ? "NO" : "YES");
    return 0;
>>>>>>> 1c870ba970f062933175986d82acaa40461491f8:103.c
}
