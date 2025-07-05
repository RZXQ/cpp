#include<bits/stdc++.h>
using namespace std;
int d[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    //输入身份证号码
    string str;
    cin >> str;
    int year = 0, month = 0, day = 0;
    //记录年月日
    for (int i = 6; i <= 13; i++) {
        if (i >= 6 && i <= 9) {
            year = year * 10 + str[i] - '0';
        } else if (i >= 10 && i <= 11) {
            month = month * 10 + str[i] - '0';
        } else if (i >= 12 && i <= 13) {
            day = day * 10 + str[i] - '0';
        }
    }
    //判断年月日是否正确
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) d[2] = 29;
    if (month >= 1 && month <= 12 && day >= 1 && day <= d[month]) {
        cout << year << ' ' << month << ' ' << day;
    } else {
        cout << "error";
    }

    return 0;
}
