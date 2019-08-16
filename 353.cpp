/*************************************************************************
 *  > File Name: 353.cpp
 *      > Author: LiChun
 *          > Mail: 318082789@qq.com
 *              > Created Time: 2019年08月14日 星期三 13时22分34秒
 *               ************************************************************************/

#include <iostream>
using namespace std;

long long num[400] = {0};

void _cala(int val, int pos, int cnt, long long &ans) {
    if (cnt > val) {
        return ;
    } else if (cnt == val) {
        ans++;
        return ;
    }
    for (int i = pos; i < val; i++) {
        _cala(val, i, cnt + i, ans);
    }
}

void cala(int val, long long &ans) {
    for (int i = 1; i < (val + 1) / 2; i++) {
        _cala(i, 1, 0, ans);
        _cala(val - i, 1, 0, ans);
    }
}

int main() {
    long long n, ans = 0;
    cin >> n;
    cala(n, ans);
    cout << ans % 2147483648 << endl;
    return 0;
}

