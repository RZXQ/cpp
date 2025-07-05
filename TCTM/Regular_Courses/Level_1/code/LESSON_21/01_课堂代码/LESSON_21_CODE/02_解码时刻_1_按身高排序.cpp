#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h;
    //创建数组
    int a[181] = {0};
    //输入身高，并进行计数
    for (int i = 0; i < n; i++) {
        cin >> h;
        a[h]++;
    }
    for (int i = 110; i <= 180; i++) {
        //输出a[i]个i 
        for (int j = 1; j <= a[i]; j++)
            cout << i << " ";
    }
    return 0;
}
