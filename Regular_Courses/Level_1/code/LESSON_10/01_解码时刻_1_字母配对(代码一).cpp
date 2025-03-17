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
    for (int i = 0; i < n; i++) {
        if (c[i] == a + 32) {
            cout << "yes";
            break;
        }
    }
    return 0;
}
