/*************************************************************************
	> File Name: 330.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月23日 星期五 19时59分51秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;
#define MAX_N 100000
#define lowbit(x) (x & (-x))

struct TreeArray {
    long long n, c[MAX_N + 5];
    void init(long long n) {
        this->n = n;
        memset(c, 0, sizeof(long long) * (n + 1));
    } 
    void add(long long x, long long val) {
        while (x <= n) c[x] += val, x += lowbit(x);
    }
    long long query(long long x) {
        long long sum = 0;
        while(x) sum += c[x], x -= lowbit(x);
        return sum;
    }
};

TreeArray b, B;

int main() {
    long long n, m, pre = 0, now;
    cin >> n >> m;
    char str[10];
    b.init(n), B.init(n);
    for (long long i = 1; i <= n; i++) {
        cin >> now;
        b.add(i, now - pre);
        B.add(i, i * (now - pre));
        pre = now;
    }
    while (m--) {
        cin >> str;
        switch (str[0]) {
            case 'C' :{
                long long l, r, c;
                cin >> l >> r >> c;
                b.add(l, c);
                b.add(r + 1, -c);
                B.add(l, l * c);
                B.add(r + 1, -(r + 1) * c);
            } break;
            case 'Q' : {
                long long l, r;
                cin >> l >> r;
                l -= 1;
                long long sr = (r + 1) * b.query(r) - B.query(r);
                long long sl = (l + 1) * b.query(l) - B.query(l);
                cout << sr - sl << endl;

            } break;
        }
    }
    return 0;
}
