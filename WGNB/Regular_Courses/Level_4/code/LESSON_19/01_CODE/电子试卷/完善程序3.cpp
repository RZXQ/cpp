1
#include <iostream>
2
using namespace std;
3
struct point {
    4
    int x, y, id;
    5
};

6
bool equals(point a, point b) {
    7
    return a.x == b.x && a.y == b.y;
    8
}

9
bool cmp(point a, point b) {
    10
    return ①;
    11
}

12
void sort(point A[], int n) {
    13
    for (int i = 0; i < n; i++)
        14
    for (int j = 1; j < n; j++)
        15
    if (cmp(A[j], A[j - 1])) {
        16
        point t = A[j];
        17
        A[j] = A[j - 1];
        18
        A[j - 1] = t;
        19
    }
    20
}

21
int unique(point A[], int n) {
    22
    int t = 0;
    23
    for (int i = 0; i < n; i++)
        24
    if (②)
        25
    A[t++] = A[i];
    26
    return t;
    27
}

28
bool binary_search(point A[], int n, int x, int y) {
    29
    point p;
    30
    p.x = x;
    31
    p.y = y;
    32
    p.id = n;
    33
    int a = 0, b = n - 1;
    34
    while (a < b) {
        35
        int mid = ③;
        36
        if (④)
            37
        a = mid + 1;
        38
        else
        39
        b = mid;
        40
    }
    41
    return equals(A[a], p);
    42
}

43
const int MAXN = 1000;
44
point A[MAXN];
45
int main() {
    46
    int n;
    47
    cin >> n;
    48
    for (int i = 0; i < n; i++) {
        49
        cin >> A[i].x >> A[i].y;
        50
        A[i].id = i;
        51
    }
    52
    sort(A, n);
    53
    n = unique(A, n);
    54
    int ans = 0;
    55
    for (int i = 0; i < n; i++)
        56
    for (int j = 0; j < n; j++)
        57
    if (⑤ &&binary_search(A, n, A [i].x, A [j].y) &&binary_search(A, n, A[j].x, A[i].y)
    ) {
        58
        ans++;
        59
    }
    60
    cout << ans << endl;
    61
    return 0;
    62
}
