/*************************************************************************
	> File Name: 270.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月09日 星期三 19时25分09秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#include <deque>
using namespace std;

deque<int> q;
vector<int> arr;

int main() {
    int n, m, a, ans;
    cin >> n >> m;
    arr.push_back(0);
    for (int i = 1; i <= n; i++) cin >> a, arr.push_back(a);
    q.push_back(0);
    ans = arr[1];
    for (int i = 1; i <= n; i++) {
        arr[i] += arr[i - 1];
        if (i - q.front() > m) q.pop_front();
        ans = max(ans, arr[i] - arr[q.front()]);
        while (!q.empty() && arr[q.back()] > arr[i]) q.pop_back();
        q.push_back(i);
    }
    cout << ans << endl;
    return 0;
}
