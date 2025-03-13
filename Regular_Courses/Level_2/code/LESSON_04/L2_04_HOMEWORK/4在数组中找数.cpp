#include<bits/stdc++.h>
using namespace std;
int a[1000010];

int main() {
    int n, m;
    int d;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= m; i++) {
        cin >> d;
        //数组下标1~n的元素中二分查找整数d
        //注意：查找范围是1~n，就是L=1，R=n
        //但是参与数值比较的是a[mid] 与 d
        bool f = false; //设置标记为假，表示还没找到d
        int L = 1, R = n, mid;
        while (L <= R) {
            mid = (L + R) / 2;
            if (a[mid] == d) {
                //找到目标，将标记f赋值真
                f = true;
                break;
            } else if (a[mid] < d) {
                //目标可能在右半
                L = mid + 1;
            } else {
                //目标可能在左半
                R = mid - 1;
            }
        }
        //根据f判断目标是否存在
        if (f) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
