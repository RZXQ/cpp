#include <iostream>
#include <vector>
using namespace std;

int find_missing(vector<int> &nums) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == mid + ①) {
            ②;
        } else {
            ③;
        }
    }
    return ④;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    int missing_number = find_missing(nums);
    if (missing_number == ⑤) {
        cout << "Sequence is consecutive" << endl;
    } else {
        cout << "Missing number is " << missing_number << endl;
    }
    return 0;
}
