#include<bits/stdc++.h>
using namespace std;
int a[500001], s[500001];

int main() {
    int n, m;
    int L, R, res = 0; //res存储最大总牢固值
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i]; //输入据点牢固值
        s[i] = s[i - 1] + a[i]; //计算该据点前缀和
    }
    for (int i = 1; i <= m; i++) {
        cin >> L >> R; //输入一轮打击范围
        if ((s[R] - s[L - 1]) > res) {
            //判断当前据点总牢固值是否大于res
            res = s[R] - s[L - 1];
        }
    }
    cout << res; //输出最大总牢固值res
    return 0;
}
