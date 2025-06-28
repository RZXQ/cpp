#include<bits/stdc++.h>
using namespace std;
int vis[1001];

void fun(int x) {
    if (vis[x] != 0) return;
    vis[x] = 1;
    for (int i = 1; i <= x / 2; i++) {
        fun(i);
        vis[x] += vis[i];
    }
}

int main() {
    int n;
    cin >> n;
    fun(n);
    cout << vis[n];
    return 0;
}
