#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[201];

int main() {
    //n为人数，m为一条船的最大承重
    cin >> n >> m;
    //输入体重
    for (int i = 1; i <= n; i++) cin >> a[i];
    //体重从小到大排序
    sort(a + 1, a + n + 1);
    //i表示最轻体重下标位置，j表示最重体重下标位置
    int i = 1, j = n;
    //记录所用船数
    int cnt = 0;
    //遍历所有船员
    while (i <= j) {
        //判断最轻和最重船员是否超过载重
        if (a[i] + a[j] > m) {
            j--; //超过载重就选择更轻的船员
            cnt++; //记录船的数量
        } else {
            //切换下一组最轻、最终
            i++;
            j--;
            cnt++; //记录船的数量
        }
    }
    //输出最终解
    cout << cnt << endl;
    return 0;
}
