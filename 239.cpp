/*************************************************************************
	> File Name: 239.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月13日 星期四 20时54分10秒
 ************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

void getXY(long long n, long long s, long long &x, long long &y) {
    if (n == 0) {
        x = 0, y = 0;
        return ;
    }
    long long xx, yy;
    long long len_n_1 = (long long)pow(2, n - 1);
    long long total_n = len_n_1 * len_n_1;
    long long ind1 = s / total_n, ind2 = s % total_n;
    getXY(n - 1, ind2, xx, yy);
    switch(ind1) {
        case 0:{
            x = yy, y = xx;
        } break;
        case 1:{
            x = xx, y = yy + len_n_1;
        } break;
        case 2: {
            x = xx + len_n_1, y = yy + len_n_1;
        } break;
        case 3: {
            x = 2 * len_n_1 - yy - 1, y = yy + len_n_1; 
        }
    }
    if(ind1 == 0) {
        x == yy, y = xx;
    }

}

int main() {
    long long n, s, d;
    cin >> n >> s >> d;
    long long x1, y1, x2, y2;
    getXY(n, s, x1, y1);
    getXY(n, d, x2, y2);

    return 0;
}
