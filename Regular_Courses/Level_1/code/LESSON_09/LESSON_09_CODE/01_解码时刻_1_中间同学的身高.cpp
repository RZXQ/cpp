#include <iostream>
using namespace std;

int main() {
    //输入学生人数
    int n;
    cin >> n;
    //循环输入，并查找最高和最矮的同学以及其学号
    int h[101] = {0};
    int maxi = 1;
    int mini = 1;
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
        if (h[maxi] < h[i])
            maxi = i;
        if (h[mini] > h[i])
            mini = i;
    }
    //输出最高和最矮同学之间的学生身高以及学号
    for (int i = maxi + 1; i < mini; i++) {
        cout << i << " " << h[i] << endl;
    }
    return 0;
}
