#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
string jz[16] =
{
    "0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000",
    "1001", "1010", "1011", "1100", "1101", "1110", "1111"
};
string s;
int n;

int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        string temp = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                temp += jz[s[i] - 'A' + 10];
            } else {
                temp += jz[s[i] - '0'];
            }
        }
        while (temp.size() % 3 != 0) {
            temp = "0" + temp;
        }
        string res = "";
        for (int i = 0; i < temp.size(); i += 3) {
            int ans = (temp[i] - '0') * 4 + (temp[i + 1] - '0') * 2 + (temp[i + 2] - '0') * 1;
            res += ans + '0';
        }
        int k = 0;
        while (res[k] == '0' && k < res.size() - 1) k++;
        for (int i = k; i < res.size(); i++) cout << res[i];
        cout << endl;
    }
    return 0;
}
