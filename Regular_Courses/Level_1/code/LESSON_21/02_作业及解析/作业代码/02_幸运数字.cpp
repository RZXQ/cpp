#include<bits/stdc++.h>
using namespace std;
int ch[10];

int main() {
    int n;
    cin >> n;
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        ch[num]++;
    }
    for (int i = 0; i < 10; i++) {
        cout << ch[i] << ' ';
    }
}
