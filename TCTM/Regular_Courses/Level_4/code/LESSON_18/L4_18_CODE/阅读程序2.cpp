# include<iostream>
# include<cstring>
using namespace std;
char a[500];

int main() {
    cin.getline(a, 500);
    int m = 0, tmp = 0, max1 = -1;
    int n = strlen(a);
    for (int i = 0; i < n; i++) {
        if (a[i] != ' ' && a[i] != ',' && a[i] != '.') {
            continue;
            m++;
        }
        if (m > max1) {
            max1 = m;
            tmp = i;
        }
        m = 0;
    }
    for (int i = tmp - max1; i < tmp; i++) {
        cout << a[i];
    }
    return 0;
}
