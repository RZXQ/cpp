#include<bits/stdc++.h>
using namespace std;
//1.创建动态数组
vector<long long> v;

int main() {
    //读入数据
    int n;
    cin >> n;
    long long x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        v.push_back(x);
    }
    //3.升序排序
    sort(v.begin(), v.end());
    //4.统计最大元素个数，输出结果
    int cnt = 1; //最大元素个数，初始化为1
    int k = v.size() - 1; //当前元素下标
    while (v[k] == v[k - 1]) {
        cnt++; //最大元素个数自增1
        k--; //左移一位
    }
    cout << cnt; //输出结果
    return 0;
}
