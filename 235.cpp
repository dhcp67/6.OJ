/*************************************************************************
	> File Name: 235.cpp
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月13日 星期四 18时09分29秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

void output(int ind, int n, int k, int *buff) {
    if(ind == n) {
        return ;
    }
    for(int i = ind + 1; i <= n; i++) {
        buff[k] = i;
        for (int j = 0; j <= k; j++) {
            j == 0 || cout << " ";
            cout << buff[j];
        }
        cout << endl;
        output(i , n, k + 1,buff);
    }
}

int arr[25];

int main() {

    int n;
    cin >> n;
    output(0, n, 0, arr);
    return 0;
}
