#include<iostream>
using namespace std;
int a[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// 0  1  2  3  4  5  6  7  8  9  10  11 12
int main() {
    int n, m, ans = 0; //ans在n和m之间，有多少回文日期 
    cin >> n >> m;
    for (int i = 1; i <= 12; i++) {
        //月份 
        for (int j = 1; j <= a[i]; j++) {
            //当月的天数 
            int x = j % 10 * 1000 + j / 10 * 100 + i % 10 * 10 + i / 10;
            x = x * 10000;
            x = x + i * 100 + j;
            if (x >= n && x <= m) ans++;
        }
    }
    cout << ans;
    return 0;
}
