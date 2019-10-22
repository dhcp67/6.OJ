/*************************************************************************
	> File Name: 472.高精度取余.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年10月13日 星期日 20时28分04秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

class BigInt {
public :
    int operator%(int x) {
        int ret = 0;
        for (int i = num.size() - 1; i >= 0; --i) {
            ret = ret * 10 + num[i];
            ret %= x;
        }
        return ret;
    }
    void operator=(string str) {
        num.clear();
        for (int i = str.size() - 1; i >= 0; --i) {
            num.push_back(str[i] - '0');
        }
    }
    vector<int> num;
};

int main() {
    string str;
    BigInt m;
    int  n;
    cin >> n >> str;
    m = str;
    cout << m % n << endl;
    return 0;
}
