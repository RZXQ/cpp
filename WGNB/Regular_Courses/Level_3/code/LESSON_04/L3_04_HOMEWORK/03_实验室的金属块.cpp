#include <iostream>
using namespace std;
int a[100005], b[100005], n, k;

int main() {
    int mx = 0, total = 0;
    cin >> n >> k;
    int l, w, h, z;
    for (int i = 0; i < n; i++) {
        cin >> l >> w >> h >> z;
        a[i] = l * w * h; //存储体积
        b[i] = z; //存储对应罐子数
    }
    int ans = 0;
    int L = 1, R = 1000000, mid;
    while (L <= R) {
        mid = (L + R) / 2;
        int rst = 0;
        for (int i = 0; i < n; i++) {
            rst += min(a[i] / mid, b[i]);
        }
        if (rst < k) {
            //结果小于k，调整r
            R = mid - 1;
        } else {
            //结果大于k，记录，调整l
            ans = mid;
            L = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
