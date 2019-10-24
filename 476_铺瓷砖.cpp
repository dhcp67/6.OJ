/*************************************************************************
	> File Name: 476_铺瓷砖.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年10月22日 星期二 18时35分10秒
 ************************************************************************/

#include<iostream>
using namespace std;

const int MAX_N = 1000;
int arr[MAX_N + 5];

int f(int n) {
    if (arr[n]) return arr[n];
    int ret = 0;
    //arr[n - 1] = f(n - 1);
    //arr[n - 2] = f(n - 2);
    arr[n] = f(n - 1) + f(n - 2) * 2;
    //arr[n] = arr[n - 1] + arr[n - 2] * 2;
    return (arr[n]) % 12345;
}

int main() {
    int n;
    arr[1] = 1;
    arr[2] = 3;
    cin >> n;
    cout << f(n) % 12345 << endl;
    return 0;
}

