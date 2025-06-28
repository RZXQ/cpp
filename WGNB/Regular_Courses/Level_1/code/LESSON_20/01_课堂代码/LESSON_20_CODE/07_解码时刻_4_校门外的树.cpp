#include <iostream>
using namespace std;
const int MAXN = 10001;

int main() {
    //接收马路的长度、拔除树木范围的个数
    int l, m;
    cin >> l >> m;
    // 标记树是否被移走
    bool a[MAXN] = {0};
    //循环接收要拔除树木的范围
    int u, v;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        //遍历每个范围，
        for (int j = u; j <= v; j++) {
            //找出其中要拔除的树木，标记为1 
            if (a[j] == 0) a[j] = 1;
        }
    }
    //统计剩余树木的数量
    int cnt = 0;
    for (int i = 0; i <= l; i++) {
        if (a[i] == 0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
