/*************************************************************************
	> File Name: 487_发愤涂墙.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年10月22日 星期二 18时45分44秒
 ************************************************************************/

#include<iostream>
using namespace std;
const int MAX_N = 45;

int arr[MAX_N + 5];

long long tuqiang(int n) {
    if (arr[n]) return arr[n];
    arr[n] = tuqiang(n - 1) + tuqiang(n - 2);
    return arr[n];

}

int main() {
    int n;
    arr[2] = arr[1] = 1;
    cin >> n;
    cout << tuqiang(n) * 2 << endl;
    return 0;
}

/*第一块红。最后一块不是蓝色
 * f(n)=f(n-1)+f(n-2)
 * 2*f(n)
 */
