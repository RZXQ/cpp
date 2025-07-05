#include<bits/stdc++.h>
using namespace std;
vector<int> v;

int main() {
    int n;
    cin >> n;
    int num;
    for (int i = 1; i <= n; i++) {
        cin >> num;
        v.push_back(num);
    }
    //sort排序
    sort(v.begin(), v.end());
    int cnt = 1; //计数
    for (int i = 0; i <= v.size() - 2; i++) {
        if (v[i] == v[i + 1]) {
            //当前元素等于下一个元素，计数+1
            cnt++;
        } else if (v[i] != v[i + 1] && cnt == 1) {
            //当前元素不等于下一元素，且计数等于1
            cout << v[i];
            return 0;
        } else {
            //计数重置1
            cnt = 1;
        }
    }
    cout << v[v.size() - 1]; //最大值只出现一次的情况
    return 0;
}
