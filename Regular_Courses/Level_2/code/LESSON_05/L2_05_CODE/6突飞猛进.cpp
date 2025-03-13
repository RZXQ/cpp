#include<bits/stdc++.h>
using namespace std;

struct node {
    //s会议开始时间，e会议结束时间
    int s, e;
} T[1010], tmp;

bool cmp(node x, node y) {
    //按照会议结束时间升序排列
    return x.e < y.e;
}

int main() {
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> T[i].s >> T[i].e;
    sort(T, T + n, cmp); //结构体数组排序
    int sum = 1; //统计会议数，第1个会议先统计
    tmp = T[0]; //临时存储已选会议
    for (int i = 1; i < n; i++) {
        //从第二个会议开始遍历
        if (T[i].s >= tmp.e) {
            //当前会议的开始时间 >=上个会议的结束时间
            sum++; //符合条件，会议不冲突，累加会议数
            tmp = T[i]; //更新已选会议
        }
    }
    cout << sum; //输出结果
    return 0;
}
