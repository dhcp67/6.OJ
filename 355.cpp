/*************************************************************************
	> File Name: 355.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月14日 星期三 14时54分46秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

bool is(int *arr, int start, int cnt, int val, int n) {
    if (cnt == val) {
        return true;
    }
    bool ret = false;
    for (int i = start; i < n; i++) {
        if (is(arr, i + 1, cnt, val + arr[i], n)) return true;
    }
    return ret;
}

int main() {
    const char *can = "Can";
    const char *can_t = "Can''t";
    int arr[6];
    while (1){
        int ret = 1;
        int cnt = 0;
        for (int i = 0; i < 6; i++) {
            cin >> arr[i];
            cnt += arr[i];
            if (arr[i]) ret = 0;
        }
        if (ret) break;
        sort(arr, arr + 6, cmp);
        if (ceil(cnt / 2) != floor(cnt / 2)) cout << can_t << endl;
        else {
            is(arr, 0, cnt / 2, 0, 6) ? cout << can << endl : cout << can_t << endl;
        }
    }
    return 0;
}
