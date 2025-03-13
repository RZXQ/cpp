#include<bits/stdc++.h>
using namespace std;

struct Node {
    int s;
    int e;
};

Node a[105];

bool cmp(Node x, Node y) {
    if (x.e != y.e) return x.e < y.e;
    else return x.s < y.s;
}

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        //n不等于0就继续
        for (int i = 1; i <= n; i++)
            cin >> a[i].s >> a[i].e;
        sort(a + 1, a + n + 1, cmp); //结束时间早的在前
        int s = 1; //统计节目数量，默认第1可以看
        Node t = a[1]; //t记录已统计的最后1个节目
        for (int i = 2; i <= n; i++) {
            //当前节目开始时间不小于t的结束时间
            if (a[i].s >= t.e) {
                s++;
                t = a[i];
            }
        }
        cout << s << endl;
        cin >> n; //输入下1组n，如果n=0则退出while
    }
    return 0;
}
