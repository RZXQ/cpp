#include<bits/stdc++.h>
using namespace std;
string s = "baacaaba";

bool Check(int i, int j) {
    while (i <= j) {
        if (s[i] != s[j]) //不相同则非回文
            return 0;
        i++;
        j--;
    }
    return 1; //一直相同则回文
}

int main() {
    int l = s.size(); //总长度
    int ans = 1; //单个字符都为回文串，因此结果默认为1
    for (int len = 2; len <= l; len++) {
        //长度
        for (int i = 0; i + len - 1 < l; i++) {
            //起点
            int j = i + len - 1; //终点
            if (Check(i, j)) {
                //判回文
                ans = max(ans, len);
            }
        }
    }
    cout << ans; //输出结果
    return 0;
}
