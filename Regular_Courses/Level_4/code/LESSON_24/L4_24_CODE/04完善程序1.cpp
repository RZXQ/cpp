#include <bits/stdc++.h>
using namespace std;

int searchInsert(int nums[], int target, int n) {
    int left = 1, right = n, ans = n + 1;
    while (left <= right) {
        int mid = (right + left) / 2;
        if (target <= nums[mid]) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, nums[1001] = {}, target;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> nums[i];
    cin >> target;
    int ret = searchInsert(nums, target, n);
    cout << ret;
    return 0;
}
