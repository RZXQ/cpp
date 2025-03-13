#include <bits/stdc++.h>
using namespace std;


int main() {
    //病人排队
    int num[101] = {0}, age[101] = {0};
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num[i] >> age[i];
    }

    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (age[i] < age[j]) {
                //交换年龄
                swap(age[i], age[j]);
                //交换序号
                swap(num[i], num[j]);
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << num[i] << " " << age[i] << endl;
    }

    return 0;
}
