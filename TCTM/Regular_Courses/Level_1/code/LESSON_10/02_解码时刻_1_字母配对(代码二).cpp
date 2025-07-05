#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char c[26] = {0};
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    char a;
    cin >> a;
    bool flag = 0;
    for (int i = 0; i < n; i++) {
        if (c[i] == a + 32) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) cout << "yes";
    else cout << "no";
    return 0;
}
