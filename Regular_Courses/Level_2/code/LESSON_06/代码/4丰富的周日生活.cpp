#include<bits/stdc++.h>
using namespace std;

struct act {
    int s, e; //s-开始时间；e-结束时间
} a[1005];

bool cmp(act x, act y) {
    return x.e < y.e;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].s >> a[i].e;
    sort(a + 1, a + n + 1, cmp);
    int k = 1; //用于标记选定的最后一个活动
    int cnt = 1; //用于累计小童可以参加的活动数量
    for (int i = 2; i <= n; i++) {
        if (a[i].s >= a[k].e) {
            cnt++;
            k = i;
        }
    }
    cout << cnt;
    return 0;
}
