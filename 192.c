/*************************************************************************
	> File Name: 192.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月06日 星期六 16时45分13秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define e 2.7182818

//xe^x - a = 0;

double f(double x, double a) {
    return x * pow(e, x) - a;
}
int main() {
    double a;
    double ans;
    scanf("%lf", &a);
    double l = 0.0, r = 10.0;
    for (int i = 0; i < 10000; i++) {
        double mid = (l + r) / 2;
        double tmp = f(mid, a);
        ans = mid;
        if (tmp == 0) {
            break;
        }
        if (tmp < 0) {
            l = mid;
        } else {
            r = mid;
        }
    }
    printf("%.4lf", ans);
    return 0;
}
