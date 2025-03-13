1
#include <iostream>
2
#include <vector>
3
using namespace std;
4
int find_missing(vector<int> &nums) {
    5
    int left = 0, right = nums.size() - 1;
    6
    while (left < right) {
        7
        int mid = left + (right - left) / 2;
        8
        if (nums[mid] == mid + ①) {
            9
            ②;
            10
        } else {
            11
            ③;
            12
        }
        13
    }
    14
    return ④;
    15
}

16
int main() {
    17
    int n;
    18
    cin >> n;
    19
    vector<int> nums(n);
    20
    for (int i = 0; i < n; i++) cin >> nums[i];
    21
    int missing_number = find_missing(nums);
    22
    if (missing_number == ⑤) {
        23
        cout << "Sequence is consecutive" << endl;
        24
    } else {
        25
        cout << "Missing number is " << missing_number << endl;
        26
    }
    27
    return 0;
    28
}
