#include<bits/stdc++.h>
using namespace std;
int a[10] = {1, 2, 3, 5, 7, 9}, n, ans, num;
//判断质数
bool prime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

//搜索符合要求的质数
void dfs(int b) {
    for (int i = 0; i < 6; i++) {
        num = b * 10 + a[i];
        if (num > n) return;
        if (prime(num)) {
            ans++;
            dfs(num);
        }
    }
}

int main() {
    cin >> n;
    dfs(0);
    cout << ans;
    return 0;
}
