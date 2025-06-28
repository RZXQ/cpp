#include<bits/stdc++.h>
using namespace std;
//奇数求和,如：1+3+5+7+9
int odd(int n) {
    if (n <= 1)
        return 1;
    return odd(n - 2) + n;
}

int main() {
    int n = 0;
    cin >> n;
    //处理成奇数
    if (n % 2 == 0) {
        n--;
    }
    cout << odd(n) << endl;
    return 0;
}
