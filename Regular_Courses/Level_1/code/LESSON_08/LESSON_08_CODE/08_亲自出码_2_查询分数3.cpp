#include <iostream>
using namespace std;

int main() {
    //输入学生人数
    int n;
    cin >> n;
    //输入n名学生的分数，保存至数组
    int a[101] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    //计算总分
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i];
    }
    //计算平均分
    int aver = sum / n;
    cout << aver << endl;
    //循环判断和输出
    for (int i = 1; i <= n; i++) {
        if (a[i] > aver) cout << i << " ";
    }


    return 0;
}
