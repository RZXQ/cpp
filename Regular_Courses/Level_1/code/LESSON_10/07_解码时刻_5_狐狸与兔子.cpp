#include <iostream>
using namespace std;

int main() {
    //记录查询次数
    int n;
    cin >> n;
    bool a[11] = {0}; // 0：可以躲，1：不能躲
    //记录狐狸每次找的洞穴，狐狸最开始在10号洞穴
    int d = 10;
    a[d] = 1; // 狐狸从10号洞出发，兔子不能躲
    //循环n次，标记每次狐狸找过的洞穴
    int x = 1;
    for (int i = 0; i < n; i++) {
        d = (d + x) % 10;
        a[d] = 1;
        x++;
    }
    //循环查找并输出数组中状态为0的洞穴(兔子可以躲藏）
    for (int i = 1; i <= 10; i++) {
        if (a[i] == 0) cout << i << " ";
    }
    return 0;
}
