#include <bits/stdc++.h>
using namespace std;

int main() {
    //1、接收输入的字符串
    char s[10001] = {};
    cin >> s;
    //2、计算玻璃珠子数量
    int len = strlen(s);
    //3、升序排序
    sort(s, s + len);
    cout << s << endl;
    //4、统计每种玻璃珠子的数量
    int r = 0, g = 0, b = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == 'R') r++;
        else if (s[i] == 'G') g++;
        else if (s[i] == 'B') b++;
    }
    //5、求出能串成幸运珠的数量
    int sum = min(r, min(g / 2, b / 3));
    cout << sum;

    return 0;
}
