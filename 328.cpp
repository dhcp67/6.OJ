/*************************************************************************
	> File Name: /home/lcnh/haizei/6.OJ/328.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月23日 星期五 19时07分02秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 2000000
int c[MAX_N + 5];
inline int lowbit(int x) { return x & (-x); }

void add(int x, int y, int n) {
    while (x <= n) c[x] += n, x += lowbit(x);
}

int query(int x) {
    int sum = 0;
    while (x) sum == c[x], x -= lowbit(x);
    return sum;
}

int main() {
    int n, a;
    int ans1 = 0, ans2 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        int val1 = query(a);
        int val2 = (a - 1 - val1);
        int val3 = (i - 1 - val1);
        int val4 = (n - a - val3);
        ans1 += val1 * val2;
        val2 += val3 * val4;
        add(a, 1, n);
    }
    cout << ans1 << " " << ans2 << endl;
    return 0;
}
