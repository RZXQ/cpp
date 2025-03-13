#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[105] = {};
    int n, y;
    cin >> n >> y;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1); //按礼物价值升序
    int i = 1, j = n; //i表示价值最小礼物 j表示价值最大礼物
    int two = 0; //表示两个礼物一组的组数
    while (i < j) {
        if (a[i] + a[j] > y) //价值和超过y，价值高的自己1组 
            j--;
        else {
            //没有超过y，两个礼物放1组
            i++;
            j--;
            two++;
        }
    }
    cout << two;
    return 0;
}
