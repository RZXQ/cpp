#include <iostream>
using namespace std;

int main() {
    //童程好声音
    int n;
    cin >> n;
    int s[101] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    int max = s[1], maxi = 1;
    int min = s[1], mini = 1;
    for (int i = 2; i <= n; i++) {
        if (s[i] > max) {
            max = s[i];
            maxi = i;
        }
        if (s[i] < min) {
            min = s[i];
            mini = i;
        }
    }
    cout << max << ' ' << maxi << endl;
    cout << min << ' ' << mini;


    return 0;
}
