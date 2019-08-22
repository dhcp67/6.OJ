/*************************************************************************
	> File Name: 264.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月17日 星期三 16时31分17秒
 ************************************************************************/

#include <iostream>
#include <stack>

using namespace std;
#define MAX_N 100000
int arr[MAX_N + 5];
int l[MAX_N + 5], r[MAX_N + 5];

int main() {mZ    int n;
            stack<int> s;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    s.push(0);
    for (int i = 1; i <= n; i++) {
        while (arr[s.top()] >= arr[i]) s.pop();
        l[i] = i - s.top();
         
    }

    return 0;
}
