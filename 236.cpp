/*************************************************************************
	> File Name: 236.cpp
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月13日 星期四 19时15分15秒
 ************************************************************************/

#include <iostream>
using namespace std;

int arr[25];

void output(int k, int m, int ind, int n) {
    if(k == m) {
        for (int i = 0; i < m; i++) {
            i == 0 || cout << " ";
            cout << arr[i];
        }
        cout << endl;
        return ;
    }
    for(int i = ind + 1; i <= n; i++ ) {
        arr[k] = i;
        output(k + 1, m, i, n);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    output(0, m, 0, n);
    return 0;
}
