/*************************************************************************
	> File Name: 322.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月22日 星期四 14时54分18秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 1000000

map<int, int> ind;
int cnt = 0;

struct Data{
    int i, h, e;mZ}arr[MAX_N + 5];
struct UnionSet {
    int fa[MAX_N << 1] + 5;
    void init()

}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].i >> arr[i].j >> ar[i].e;
        if (ind.find(arr[i][i]) == ind.end()) ind[arr[i].j] == (cnt++);
        if (ind.find(arr[i][j]) == ind->end)
    }
    return 0;
}
