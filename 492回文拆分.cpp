/*************************************************************************
	> File Name: 492回文拆分.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年10月22日 星期二 19时57分09秒
 ************************************************************************/

#include<iostream>
using namespace std;

void f(int n, int m, int pre, int &ans) {
    if (m * 2 + pre < n) {
        return ;
    }
    if ( m * 2 == n || m * 2 + pre == n) {
        if (pre != n) {
            ans++;
        }
        return ;
    }
    for (int i = 1; i < n; i++) {
        f(n, m - i, i, ans);
    }
}

int main() {
    int k, ans = 0;
    cin >> k;
    f(k, k, 0, ans);
    cout << ans << endl;
    return 0;
}

/*
 * f(n) = 总拆分数
 * f(n) = (n-1)E(i=0) f(i)
 * f(n) = 2 * f(n - 1)
 * f(0) = 1
 * f(1) = 1
 * f(n) = 2 * f(n - 1) = 2 ** (n - 1)
 */
