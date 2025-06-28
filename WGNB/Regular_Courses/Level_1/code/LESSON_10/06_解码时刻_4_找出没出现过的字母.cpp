#include <iostream>
using namespace std;

int main() {
    //输入字母的个数n
    int n;
    cin >> n;
    //创建bool类型的数组：用于标记'a'~'z'之间的字母是否出现
    bool a[123] = {0};
    //标记出现的字母：依次将出现的字母作为数组a的下标，将其对应的元素设置为1
    char c;
    for (int i = 1; i <= n; i++) {
        cin >> c;
        a[c] = 1;
    }
    //找出没有出现的字母：数组中为0的元素所对应的下标，就是没有出现过的字母
    for (char i = 'a'; i <= 'z'; i++) {
        if (a[i] == 0) cout << i << " ";
    }
    return 0;
}
