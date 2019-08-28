/*************************************************************************
	> File Name: tmp237.cpp
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月15日 星期六 13时44分24秒
 ************************************************************************/

#include <iostream>
using namespace std;

int arr[25];
int vis[25];

void output(int m, int n) {
    if (m == n) {
        for(int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if(vis[i] == 1) continue;
        arr[m] = i;
        vis[i] = 1;
        output(m + 1, n);
        vis[i] = 0;
    }
    return ;
}

int main() {
    int n;
    cin >> n;
    output(0, n);
    return 0;
}
