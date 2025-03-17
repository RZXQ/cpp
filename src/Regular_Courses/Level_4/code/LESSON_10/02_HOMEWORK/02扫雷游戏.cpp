#include<iostream>
using namespace std;

int main() {
    char arr[101][101] = {0};
    int n, m;
    cin >> n >> m;
    //避免超界，索引从1开始
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }
    //遇到问号就找上下左右
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int cnt = 0;
            if (arr[i][j] == '?') {
                if (arr[i][j - 1] == '*') cnt++;
                if (arr[i][j + 1] == '*') cnt++;
                if (arr[i - 1][j] == '*') cnt++;
                if (arr[i + 1][j] == '*') cnt++;
                if (arr[i - 1][j - 1] == '*') cnt++;
                if (arr[i + 1][j - 1] == '*') cnt++;
                if (arr[i - 1][j + 1] == '*') cnt++;
                if (arr[i + 1][j + 1] == '*') cnt++;
                arr[i][j] = char(cnt + '0');
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }


    return 0;
}
