1
#include <iostream>
2
using namespace std;
3
const int MAXN = 5000;
4
int n, m;
5
struct segment {
    6
    int a, b;
    7
} A[MAXN];

8
void sort() {
    // 排序
    9
    for (int i = 0; i < n; i++)
        10
    for (int j = 1; j < n; j++)
        11
    if (①) {
        12
        segment t = A[j];
        13
        ②
        14
    }
    15
}

16
int main() {
    17
    cin >> n >> m;
    18
    for (int i = 0; i < n; i++)
        19
    cin >> A[i].a >> A[i]
    ・b;
    20
    sort();
    21
    int p = 1;
    22
    for (int i = 1; i < n; i++)
        23
    if (③)
        24
    A[p++] = A[i];
    25
    n = p;
    26
    int ans = 0, r = 0;
    27
    int q = 0;
    28
    while (r < m) {
        29
        while (④)
            30
        q++;
        31
        ⑤;
        32
        ans++;
        33
    }
    34
    cout << ans << endl;
    35
    return 0;
    36
}
