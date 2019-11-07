/*************************************************************************
	> File Name: 489_偶数个数.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年10月22日 星期二 19时15分21秒
 ************************************************************************/

#include<iostream>
using namespace std;

const int MAX_N = 1000;
int arr[MAX_N + 5];
int arr2[MAX_N + 5];

int f(int n, int m) {
    if (m == 0) {
        if (arr[n]) return arr[n] % 12345;
        arr[n] = f(n - 1, 0) * 9 + f(n - 1, 1);
        return arr[n] % 12345;
    } else {
        if (arr2[n]) return arr2[n] % 12345;
        arr2[n] = f(n - 1, 0) + f(n - 1, 1) * 9;
        return arr2[n] % 12345;
    }

}

int main() {
    int m, n;
    arr[1] = 1;
    arr2[1] = 8;
    arr[2] = 17;
    arr2[2] = 73;
    cin >> n;
    cout << f(n, 1) << endl;
    return 0;
}

