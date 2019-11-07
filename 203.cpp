/*************************************************************************
	> File Name: 203.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年11月05日 星期二 15时26分03秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
const int MAX_N = 100;

int find(int n, int *arr, int s) {
    int i;
    for (i  = 0; i < n; i++) if (arr[i] < n) break;
    return i;
}

int main() {
    int arr[MAX_N + 5] = {0}, max[MAX_N] = {0};
    int s, n, m;
    cin >> n >> m;
    s = n * m;
    double averge = 0.0;
    for (int i = 0; i < s; i++) {
        cin >> arr[i];
        averge += arr[i];
        if (arr[i] > max[i % m]) max[i % m] = arr[i];
    }
    averge = averge / s + 0.5;
    for (int i = 0; i < m; i++) {
        cout << max[i] << endl;
    }
    sort(arr, arr + s, [](int a, int b)->bool{return a > b;});
    for (int i = 0; i < s; i++) {
        if (i) cout << " ";
        cout << arr[i];
    }
    cout << "\n" << static_cast<int>(averge) << endl;
    cout << find(static_cast<int>(averge), arr, s) << endl;
    return 0;
}
