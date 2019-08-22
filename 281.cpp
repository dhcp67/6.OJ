/*************************************************************************
	> File Name: 281.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年08月21日 星期三 16时07分52秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX_N 100000

struct Node {
    int flag;
    int next[26];
} tree[MAX_N + 5];

int root = 1, cnt = 1;

int getNode() {
    return ++cnt;
}

void insert(const char *str) {
    int p = root;
}

int main () {
    int n, m;
    return 0;
}
