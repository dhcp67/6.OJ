/*************************************************************************
	> File Name: 240.cpp
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月13日 星期四 20时04分01秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
#define MAX_N 729

char arr[MAX_N][MAX_N];

void output(int n, int i, int j) {
    if(n == 1) {
        arr[i][j] = 'X';
        return ;
    }
    int l = (int)pow(3, n - 2);
    output(n - 1, i,  j);
    output(n - 1, i, j + 2 * l);
    output(n - 1, i + l, j + l);
    output(n - 1, i + 2 * l, j);
    output(n - 1, i + 2 * l, j + 2 * l);
    return ;
}

int main() {
    int n;
    while(cin >> n) {
        if (n == -1) {
            break;
        }
        output(n, 0, 0);
        for(int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }
        cout << "-";
    }
    return 0;
}
