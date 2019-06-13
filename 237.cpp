/*************************************************************************
	> File Name: 237.cpp
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月13日 星期四 19时26分48秒
 ************************************************************************/

#include <iostream>
using namespace std;

int arr[25];
int vis[25];

void output(int k, int n) {
    if(k == n) {
        for(int i = 0; i < n; i++) {
            i == 0 || cout << " ";
            cout << arr[i];
        }
        cout << endl;
        return ;
    }
    for(int i = 1; i <= n; i++) {
        if(vis[i]) continue;
        arr[k] = i;
        vis[i] = 1;
        output(k + 1, n);
        vis[i] = 0;
    }
}

int main() {
    int n;
    cin >> n;
    output(0, n);
    return 0;
}
