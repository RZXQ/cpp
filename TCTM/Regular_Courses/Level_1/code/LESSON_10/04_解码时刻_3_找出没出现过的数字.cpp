#include <iostream>
using namespace std;

int main() {
    //输入数字的个数n
    int n;
    cin >> n;
    //创建bool类型的数组:用于标记1~20之间的数字是否出现过
    bool a[21] = {0};
    //标记出现的数字：依次将出现的数字作为数组a的下标，将其对应的元素设置为1
    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a[x] = 1;
    }
    //找出没有出现的数字：数组中为0的元素所对应的下标，就是没有出现过的数字
    for (int i = 1; i <= 20; i++) {
        if (a[i] == 0) cout << i << " ";
    }
    return 0;
}
