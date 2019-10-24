/*************************************************************************
	> File Name: 488_城市路径.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年10月22日 星期二 19时00分58秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

const int MAX_N = 100000;

class Arr{
public :
    int x, y;    
};

class Arr arr[MAX_N + 5];

int calc(int n) {
    long long ret = 0, ans = 0, tmp;
    for (int i = 1; i < n; i++) {
        ret += abs(arr[i + 1].x - arr[i].x) + abs(arr[i + 1].y - arr[i].y);
    }
    tmp = ret;
    for (int i = 3; i <= n; i++) {
        tmp = tmp + abs(arr[i].x - arr[i - 2].x) + abs(arr[i].y - arr[i - 2].y);
        tmp = tmp - abs(arr[i].x - arr[i - 1].x) - abs(arr[i].y - arr[i - 1].y) - abs(arr[i - 1].x - arr[i - 2].x) - abs(arr[i - 1].y - arr[i - 2].y);
        if (tmp < ans || ans == 0) ans = tmp;
        tmp = ret;
    }
    return ans;

}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i].x >> arr[i].y;
    }
    cout << calc(n) << endl;
    return 0;
}


/*
 *dp[i][0] = dp[i - 1][0] + dis(i, i - 1)
 *dp[i][1] = dp[i - 1][1] + dis(i, i - 1)
 *           dp[i - 2][0] + dis(i - 2, i)
 */
