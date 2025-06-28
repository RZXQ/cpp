#include <bits/stdc++.h>
using namespace std;

int main() {
    double x;
    int n;
    cin >> x >> n;
    int a = int(x); //整数部分
    double b = x - a; //小数部分
    //定义所需的字符串
    string str = "0123456789ABCDEF";
    string ans = ""; //存放结果
    //1. 求整数部分
    if (a == 0) ans = "0";
    while (a > 0) {
        int mod = a % n;
        ans = str[mod] + ans; //除以n取余数 
        a = a / n; //求下次的被除数
    }
    //2. 求小数部分 乘以n取整
    ans += ".";
    int cnt = 0;
    while (b > 0 && cnt < 3) {
        b = b * n;
        int i = int(b);
        ans = ans + str[i];
        b = b - int(b);
        cnt++;
    }
    cout << ans;


    return 0;
}
