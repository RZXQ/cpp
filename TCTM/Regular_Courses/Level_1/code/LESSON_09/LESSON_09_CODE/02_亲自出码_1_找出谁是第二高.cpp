#include <iostream>
using namespace std;

int main() {
    //接收输入的学生人数
    int n;
    cin >> n;
    //第一轮找出身高最高的同学，他的身高及学号
    int h[101] = {};
    int maxi = 1;
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
        if (h[maxi] < h[i])
            maxi = i;
    }
    //第二轮找到第二高的同学，他的身高及学号
    int twoi = 1;
    for (int i = 1; i <= n; i++) {
        if (i == maxi) continue;
        if (h[twoi] < h[i])
            twoi = i;
    }
    //输出
    cout << twoi << " " << h[twoi];
    return 0;
}
