/*************************************************************************
	> File Name: 344.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月14日 星期三 12时53分00秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n;
    int ans = 0;
    cin >> n;
    int *a = (int *)malloc(sizeof(int) * n);
    int *b = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for (int i = 0; i < n; i++) {
        int tmp = abs(a[i] - b[i]);
        cout << a[i] << " " << b[i] << endl;
        ans += tmp;
    }
    cout << ans << endl;
    free(a);
    free(b);
    return 0;
}
