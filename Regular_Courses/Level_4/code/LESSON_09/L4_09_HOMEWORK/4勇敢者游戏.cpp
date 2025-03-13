#include<bits/stdc++.h>
using namespace std;

struct Node {
    int t; //完成期限
    int w; //金额
};

Node a[5001];
int w[5001] = {}; //已安排游戏的金额
bool cmp(Node x, Node y) {
    //完成期限升序
    return x.t < y.t;
}

int main() {
    int m, n; //初始金额, n个游戏
    cin >> m >> n;
    for (int i = 1; i <= n; i++) //输入完全期限
        cin >> a[i].t;
    int sum = 0; //n个游戏总金额
    for (int i = 1; i <= n; i++) {
        //输入游戏金额，再累加
        cin >> a[i].w;
        sum += a[i].w;
    }
    sort(a + 1, a + n + 1, cmp); //完成期限升序
    int cnt = 0; //已安排游戏的数量
    for (int i = 1; i <= n; i++) {
        //遍历n个游戏
        if (a[i].t > cnt) {
            //完成期限>cnt表示能直接安排
            cnt++;
            w[cnt] = a[i].w;
        } else if (a[i].t == cnt && a[i].w > w[1]) {
            //替换已安排的最小金额
            w[1] = a[i].w;
        }
        sort(w + 1, w + cnt + 1); //升序, 方便找最小金额w[1]
    }
    int sum1 = 0; //统计安排成功的金额
    for (int i = 1; i <= cnt; i++) {
        sum1 += w[i];
    }
    cout << m - (sum - sum1); //sum-sum1扣减金额
    return 0;
}
