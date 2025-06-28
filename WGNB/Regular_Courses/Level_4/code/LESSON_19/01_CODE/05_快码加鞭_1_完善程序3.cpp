#include <iostream>
using namespace std;

struct point {
    int x, y, id; //(xy)某个点的坐标 id编号
};

bool equals(point a, point b) {
    //判断点是否重复
    return a.x == b.x && a.y == b.y;
}

bool cmp(point a, point b) {
    //排序，以x升序，如果x相同，则以y升序
    return a.x != b.x ? a.x < b.x : a.y < b.y;
}

void sort(point A[], int n) {
    //冒泡排序 A数组
    for (int i = 0; i < n; i++)
        for (int j = 1; j < n; j++)
            if (cmp(A[j], A[j - 1])) {
                point t = A[j];
                A[j] = A[j - 1];
                A[j - 1] = t;
            }
}

int unique(point A[], int n) {
    //去重后，点的个数
    int t = 0;
    for (int i = 0; i < n; i++)
        if (t == 0 || !equals(A[i], A[t - 1]))
            A[t++] = A[i];
    return t;
}

bool binary_search(point A[], int n, int x, int y) {
    //二分查找坐标是否出现在数组中
    point p;
    p.x = x;
    p.y = y;
    p.id = n;
    int a = 0, b = n - 1;
    while (a < b) {
        int mid = (a + b) >> 1;
        if (cmp(A[mid], p))
            a = mid + 1;
        else
            b = mid;
    }
    return equals(A[a], p);
}

const int MAXN = 10;
point A[MAXN];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i].x >> A[i].y; //输入n个点的x和y
        A[i].id = i; //id编号
    }
    sort(A, n); //n个点排序
    n = unique(A, n); //去除重合点
    int ans = 0;
    for (int i = 0; i < n; i++) //枚举左上角点
        for (int j = 0; j < n; j++) //枚举右下角点，再查找另外两点是否存在
            if (A[i].x < A[j].x && A[i].y < A[j].y && binary_search(A, n, A[i].x, A[j].y) && binary_search(
                    A, n, A[j].x, A[i].y)) {
                ans++; //计数
            }
    cout << ans << endl;
    return 0;
}
