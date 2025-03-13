#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[123] = {0};
    string s;
    cin >> s; //读入字符串
    //依次获取每个字符，将数组a中对应的下标元素值加1。
    for (int i = 0; i < s.length(); i++) {
        a[s[i]]++;
    }
    //输出排序后的字符串
    for (int i = 'a'; i <= 'z'; i++) {
        for (int j = 0; j < a[i]; j++) {
            cout << char(i);
        }
    }
    return 0;
}
