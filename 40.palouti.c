/*************************************************************************
	> File Name: palouti.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月06日 星期六 20时17分19秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>


int f(int n,int arr[]) {
    int arr1[1000] = {0};
    int arr2[1000] = {1};
    int arr3[1000] = {1};
    int len = 0;
    int ret = 0;
    //long long  step[501] = {0,0,1,1,1,2};
    for(int i = 4; i <= n; i++) { 
        ret = 0;
        int j;
        for(j = 0; j <= len; j++) {
            arr[j] = (arr1[j] + arr2[j] +ret) % 10;
            ret = (arr1[j] + arr2[j] + ret) / 10;
            //step[i] = step[i - 2] + step[i - 3];
        }
        //for(int o = 0; o < 10; o++) printf("%d\n", arr[o]);
        if(ret) {
            len++;
            arr[j] = ret;
        }
        for(int o = 0; o < 1000; o++) arr1[o] = arr2[o];
        for(int o = 0; o < 1000; o++) arr2[o] = arr3[o];
        for(int o = 0; o < 1000; o++) arr3[o] = arr[o];
    }
    return len; 
}
int main() {
    int arr[1000] = {1};
    int n;
    int len;
    scanf("%d", &n);
    if(n != 1)len = f(n, arr);
    else arr[0] = 0;
    for(int i = len; i >= 0; i--) {
        printf("%d", arr[i]);
    }

    return 0;
}
