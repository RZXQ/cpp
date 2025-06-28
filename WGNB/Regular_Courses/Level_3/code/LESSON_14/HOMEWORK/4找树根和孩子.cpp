#include <bits/stdc++.h>
using namespace std;
int par[105], deg[105];

int main() {
    int n, m, root, maxNode;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        par[b] = a; //存储每个子节点的父结点
    }
    for (int i = 1; i <= n; ++i) {
        if (par[i] == 0) //如果n个钟父结点为0，说明是根
            root = i;
        deg[par[i]]++; //同一个父结点值作为下标，父结点个数作为元素，统计各父结点的度
    }
    cout << root << endl;
    int maxDeg = 0;
    for (int i = 1; i <= n; ++i) {
        if (deg[i] > maxDeg) {
            //找出度的最大值
            maxDeg = deg[i];
            maxNode = i; //记录父节点值
        }
    }
    cout << maxNode << endl;
    for (int i = 1; i <= n; ++i) {
        if (par[i] == maxNode) //度最大的父结点值 par数组中对应下标，即为其子节点
            cout << i << " ";
    }
    return 0;
}
