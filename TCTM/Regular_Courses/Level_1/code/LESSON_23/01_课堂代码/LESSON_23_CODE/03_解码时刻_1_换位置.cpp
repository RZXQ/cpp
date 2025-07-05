#include<bits/stdc++.h>
using namespace std;
int stu[10][10];

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cnt++;
            stu[i][j] = cnt;
        }
    }
    int a, b;
    cin >> a >> b;
    swap(stu[a][b], stu[b][a]);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << stu[i][j] << " ";
        cout << endl;
    }
    return 0;
}
