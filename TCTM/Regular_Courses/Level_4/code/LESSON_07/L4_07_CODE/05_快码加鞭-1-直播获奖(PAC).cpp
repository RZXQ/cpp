#include<bits/stdc++.h>
using namespace std;
int a[100010]; //分数
bool cmp(int x, int y) {
    //降序
    return x > y;
}

int main() {
    int n, w; //选手总数，获奖率
    cin >> n >> w;
    int m; //计划获奖人数
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sort(a + 1, a + i + 1, cmp); //降序
        m = max(1, i * w / 100);
        cout << a[m] << " ";
    }
    return 0;
}
