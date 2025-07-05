#include <iostream>
using namespace std;

int main() {
    //输入数字的个数n
    int n;
    cin >> n;
    //创建bool类型的数组：用于标记1~100之间的数字是否出现
    bool a[101] = {0};
    //标记出现的数字：依次将出现的数字作为数组a的下标，将其对应的元素设置为1
    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a[x] = 1;
    }
    //找出出现的数字：数组中为1的元素所对应的下标，就是出现过的数字
    for (int i = 1; i <= 100; i++) {
        if (a[i] == 1) cout << i << " ";
    }
    return 0;
}
