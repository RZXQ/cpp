#include<bits/stdc++.h>
using namespace std;
int a[1000010] = {0, 1, 2};

int main() {
    int n;
    int k;
    cin >> n;
    //输入n组k
    for (int i = 1; i <= n; i++) {
        cin >> k;
        //递推3~k项数列
        for (int j = 3; j <= k; j++) {
            a[j] = 2 * a[j - 1] + a[j - 2]; //计算出当前项
            a[j] = a[j] % 32767; //当前项取余32767
        }
        cout << a[k] << endl;
    }
    return 0;
}
