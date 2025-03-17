#include<bits/stdc++.h>
using namespace std;
int n, m;
int q[110], p[110]; //气球高度q, 同学身高p
int p1[110]; //记录i同学已摘的数量
int vis[110]; //标记气球是否被摘
bool cmp(int x, int y) {
    //降序
    return x > y;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> q[i];
    for (int i = 1; i <= m; i++) cin >> p[i];
    sort(q + 1, q + n + 1, cmp); //气球高度降序
    sort(p + 1, p + m + 1, cmp); //同学身高降序
    int ans = 0; //答案
    for (int i = 1; i <= m; i++) {
        //遍历同学(从高到低)
        for (int j = 1; j <= n; j++) {
            //遍历气球(从高到低)
            if (p[i] >= q[j] && vis[j] == 0) {
                vis[j] = 1;
                p1[i]++;
                ans++;
            }
            if (p1[i] == 2) //摘够2个气球
                break;
        }
    }
    cout << ans;
    return 0;
}
