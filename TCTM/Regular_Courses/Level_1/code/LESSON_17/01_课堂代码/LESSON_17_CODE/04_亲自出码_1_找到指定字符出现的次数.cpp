#include <iostream>
using namespace std;
//1、定义函数stats
void stats(string a, char b) {
    //2、统计指定字符的数量
    int sum = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == b) sum++;
    }
    cout << sum << endl;
}

int main() {
    //3、接收输入字符串、指定字符
    string s;
    getline(cin, s);
    char c;
    cin >> c;
    //4、调用stats函数
    stats(s, c);
    return 0;
}
