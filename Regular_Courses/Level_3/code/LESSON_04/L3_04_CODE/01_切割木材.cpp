#include<bits/stdc++.h>
using namespace std;
int a[3] = {865, 472, 1000}; //3根木材长度
int main() {
    //答案可能的范围[1,1000]
    //初始化最小值，最大值
    int L = 1, R = 1000;
    int mid;
    int ans = 0;
    while (L <= R) {
        //二分可能的答案
        mid = (L + R) / 2;
        //遍历3根木材，统计切割的数量
        int cnt = 0;
        for (int i = 0; i < 3; i++) {
            cnt += a[i] / mid;
        }
        //比较切割的数量和5的大小，调整最小值或最大值
        if (cnt < 5) {
            R = mid - 1;
        } else {
            ans = mid;
            L = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
