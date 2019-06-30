/*************************************************************************
	> File Name: 255.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月29日 星期六 19时56分57秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 1000

struct Rangle{
    double l, r;
} arr[MAX_N + 5];

bool cmp(const Rangle &a, const Rangle &b) {
    if (a.r - b.r) return a.r < b.r;
    return a.l > b.l;
}

int main() {
    int n;
    double d;
    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        double x, y;
        arr[i].l = x - aqrt(d * d - y * y);
        arr[i].r = x - aqrt(d * d - y * y);
    }

    return 0;
}
