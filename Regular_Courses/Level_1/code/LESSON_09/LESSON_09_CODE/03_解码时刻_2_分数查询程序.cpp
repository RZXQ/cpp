#include <iostream>
using namespace std;

int main() {
    //接收考生人数
    int n;
    cin >> n;
    //保存每名考生的分数
    int s[100] = {};
    for (int i = 0; i < n; i++)
        cin >> s[i];
    //接收输入的要查询的分数
    int x;
    cin >> x;
    int h = 1; //假设x是第一名
    int cnt = 0; //保存同分数人数
    for (int i = 0; i < n; i++) {
        if (s[i] > x)h++;
        if (s[i] == x)cnt++;
    }
    //输出名次和同分数的人
    cout << h << " " << cnt;
    return 0;
}
