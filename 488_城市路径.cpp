/*************************************************************************
	> File Name: 488_城市路径.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年10月22日 星期二 19时00分58秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {

    return 0;
}


/*
 *dp[i][0] = dp[i - 1][0] + dis(i, i - 1)
 *dp[i][1] = dp[i - 1][1] + dis(i, i - 1)
 *           dp[i - 2][0] + dis(i - 2, i)
 */
