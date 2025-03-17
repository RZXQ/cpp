#include<bits/stdc++.h>
using namespace std;
int ans, n;

bool check(int m) {
    while (m) {
        if (m % 10 == 3 || m % 10 == 7) return false;
        m /= 10;
    }
    return true;
}

void dfs(int x, int j, int s) {
    if (x == 3) {
        if (check(n - s) && n - s >= j) ans++;
        return;
    }
    for (int i = j; i <= n; i++) {
        if (check(i)) {
            dfs(x + 1, i + 1, s + i);
        }
    }
}

int main() {
    cin >> n;
    dfs(1, 1, 0); //1�ź��ӿ�ʼ���� ��1��ʼ���Է��� ��ǰ�ۼ�ֵΪ1 
    cout << ans;
    return 0;
}

/*
115
313
*/
