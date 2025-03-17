#include<bits/stdc++.h>
using namespace std;
vector<long long> v; //创建一个空动态数组
int main() {
    int n;
    cin >> n;
    long long m;
    for (int i = 0; i < n; i++) {
        cin >> m;
        v.push_back(m); //在尾部插入元素m
    }
    sort(v.begin(), v.end()); //从小到大排序
    int ans = 1; //第一个数字
    //遍历到倒数第二个数字
    for (int i = 0; i <= v.size() - 2; i++) {
        if (v[i] != v[i + 1]) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
