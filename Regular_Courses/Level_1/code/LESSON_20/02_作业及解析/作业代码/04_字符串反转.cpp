#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string arr[1001];
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i], '\n');
    }

    for (int i = 0; i < n; i++) {
        string temp = arr[i];
        int cnt = 0;
        int start = 0;
        int end = 0;
        while (cnt <= temp.size()) {
            char t = temp[cnt];
            if (t == ' ' || cnt == temp.size()) {
                end = cnt;
                string tm = temp.substr(start, (end - start));
                reverse(tm.begin(), tm.end());
                cout << tm << " ";
                start = end + 1;
            }
            cnt++;
        }
        cout << endl;
    }
    return 0;
}
