/*************************************************************************
	> File Name: 352.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月14日 星期三 11时34分26秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

void sear(int *arr, int pos, int size, int cnt, int m, int &ans) {
    if (cnt == m) {
        ans++;
        return ;
    } else if (cnt > m) {
        return ;
    }
    for (int i = pos; i < size; i++) {
        sear(arr, i + 1, size, cnt + arr[i], m, ans);
    }
    return ;
}

int main() {
    int n, m, ans = 0;
    cin >> n >> m;
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sear(arr, 0, n, 0, m, ans);
    cout << ans << endl;
    free(arr);
    return 0;
}
