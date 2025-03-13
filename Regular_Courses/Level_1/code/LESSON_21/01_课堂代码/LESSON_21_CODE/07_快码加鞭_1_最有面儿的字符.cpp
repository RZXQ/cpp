#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[26] = {0};
    //读入字符串
    string s;
    cin >> s;
    //累计每个字符的个数
    for (int i = 0; i < s.length(); i++) {
        a[s[i] - 'a']++;
    }
    //依次查看每个数组元素，找到出现次数最多的字符
    char c; //存储最有面儿的字符
    int cnt = -1; //存储最多的出现次数
    for (int i = 0; i < 26; i++) {
        if (a[i] > cnt) //当新的字符出现次数更多时，更新最有面儿的字符和出现次数
        {
            c = (char) (i + 'a');
            cnt = a[i];
        }
    }
    //按照输出格式输出
    cout << c << " " << cnt;
    return 0;
}
