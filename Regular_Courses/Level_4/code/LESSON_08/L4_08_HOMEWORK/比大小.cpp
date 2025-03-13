#include<bits/stdc++.h>
using namespace std;
bool vis[20][5];
string s = "SDCH";
string num = "A23456789TJQK";

int tran1(char c) {
    if (c == 'S') return 0;
    if (c == 'D') return 1;
    if (c == 'C') return 2;
    if (c == 'H') return 3;
}

int tran2(char c) {
    if (c == 'A') return 1;
    if (c == 'T') return 10;
    if (c == 'J') return 11;
    if (c == 'Q') return 12;
    if (c == 'K') return 13;
    else return c - '0';
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        memset(vis, false, sizeof(vis));
        int n;
        cin >> n;
        int sum = 0; //记录对方牌的点数和
        for (int i = 1; i <= n; i++) {
            string x;
            cin >> x;
            int a = tran1(x[0]);
            int b = tran2(x[1]);
            sum += b;
            vis[b][a] = 1;
        }
        vector<string> v;
        int tot = 0; //记录我方牌的点数和
        for (int i = 13; i >= 1; i--) {
            for (int j = 0; j < 4; j++) {
                if (n == 0) break;
                if (vis[i][j] == 0) {
                    vis[i][j] = 1;
                    tot += i;
                    string now;
                    now += s[j];
                    now += num[i - 1];
                    v.push_back(now);
                    n--;
                }
            }
        }
        if (tot <= sum) cout << -1 << endl;
        else {
            for (auto i: v) cout << i << endl;
        }
    }
    return 0;
}
