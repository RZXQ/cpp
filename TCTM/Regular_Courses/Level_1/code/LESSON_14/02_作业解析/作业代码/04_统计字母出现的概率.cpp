#include<bits/stdc++.h>
using namespace std;
char str[100] = {0};

int main() {
    char c;
    cin >> c;
    getchar();
    cin.getline(str, 100);
    double count = 0;
    double len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == c) {
            count++;
        }
    }
    double result = count / len * 100.0;
    printf("%.2lf", result);
    cout << '%';

    return 0;
}
