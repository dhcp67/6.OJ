/*************************************************************************
	> File Name: 476_铺瓷砖.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年10月22日 星期二 18时35分10秒
 ************************************************************************/

#include<iostream>
using namespace std;

int f(int n) {
    if (n == 1) return 1;
    if (n == 2) return 3;
    return f(n - 1) + f(n - 2) * 2;
}

int main() {
    int n;
    cin >> n;
    cout << f(n) % 12345 << endl;
    return 0;
}

