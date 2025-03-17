#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int q, z;
    cin >> q >> z; //截取范围
    //1. 截取两个整数
    string a = s1.substr(q - 1, (z - q + 1));
    string b = s2.substr(q - 1, (z - q + 1));
    //2. 处理被减数小的情况
    if (a < b) {
        string t = a;
        a = b;
        b = t;
        cout << "-";
    }
    //3. 转换反转大整数
    int a1[101] = {}, b1[101] = {};
    int l = a.size();
    for (int i = 0; i < l; i++) {
        a1[l - i - 1] = a[i] - 48;
        b1[l - i - 1] = b[i] - 48;
    }
    //4. 对应位相减
    int c1[101] = {};
    for (int i = 0; i < l; i++) {
        if (a1[i] < b1[i]) {
            a1[i + 1]--;
            a1[i] = a1[i] + 10;
        }
        c1[i] = a1[i] - b1[i];
    }
    //5. 处理前导0
    int k;
    for (k = l - 1; k > 0; k--) {
        if (c1[k] != 0) {
            break;
        }
    }
    //6. 逆序输出
    for (int i = k; i >= 0; i--) {
        cout << c1[i];
    }

    return 0;
}
