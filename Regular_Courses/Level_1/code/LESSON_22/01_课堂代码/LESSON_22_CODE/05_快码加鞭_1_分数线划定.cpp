#include<bits/stdc++.h>
using namespace std;
int a[5005] = {0};

int main() {
    int n, m;
    cin >> n >> m;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (a[j] < x) //倒序
                a[j + 1] = a[j];
            else break;
        }
        a[j + 1] = x;
    }
    //排序后，最后一个计划录取选手的位置=m*150%
    m = m * 1.5;
    //数组下标从0开始，分数线是a[m-1]
    cout << a[m - 1];

    return 0;
}
