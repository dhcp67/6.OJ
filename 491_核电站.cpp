/*************************************************************************
	> File Name: 491_核电站.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年10月22日 星期二 19时44分38秒
 ************************************************************************/

#include<iostream>
using namespace std;

int ans;

void f(int n, int m, int pos, int num) {
    if (pos == n) {
        if (num < m - 1)  ans += 1;
        else if (num == m) ans--;
        return ;
    }
    if (num >= m) {
        ans -= 1;
        return ;
    }
    ans += 1;
    f(n, m, pos + 1, ++num);
    f(n, m, pos + 1, 0);
}

int main() {
    int n, m;
    ans = 1;
    cin >> n >> m;
    f(n, m, 1, 0); 
    cout << ans << endl;
    return 0;
}

