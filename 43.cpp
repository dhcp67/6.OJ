/*************************************************************************
	> File Name: 43.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月25日 星期二 19时11分21秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 100
int num[MAX_N + 5][MAX_N + 5];


int main () {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cin >> num[i][j];
        }
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << num[i][j]; 
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j <= i; j++) {
            if (num[i + 1][j] > num[i + 1][j + 1]) {
                num[i][j] += num[i + 1][j];
            } else {
                num[i][j] += num[i + 1][j + 1];
            }
        }
    }
    cout << num[0][0] << endl;
    return 20;
}
