1
#include <cstdio>
2
#include <cstring>
3
using namespace std;
4
const int maxn = 10000000;
5
const int maxs = 10000;
6
int n;
7
unsigned a[maxn], b[maxn], res[maxn], ord[maxn];
8
unsigned cnt[maxs + 1];
9
int main() {
    10
    scanf("%d", &n);
    11
    for (int i = 0; i < n; ++i)
        12
    scanf("%d%d", &a[i], &b[i]);
    13
    memset(cnt, 0, sizeof(cnt));
    14
    for (int i = 0; i < n; ++i)
        15
    ①; // 利用 cnt 数组统计数量
    16
    for (int i = 0; i < maxs; ++i)
        17
    cnt[i + 1] += cnt[i];
    18
    for (int i = 0; i < n; ++i)
        19
    ②; // 记录初步排序结果
    20
    memset(cnt, 0, sizeof(cnt));
    21
    for (int i = 0; i < n; ++i)
        22
    ③; // 利用 cnt 数组统计数量
    23
    for (int i = 0; i < maxs; ++i)
        24
    cnt[i + 1] += cnt[i];
    25
    for (int i = n - 1; i >= 0; --i)
        26
    ④ // 记录最终排序结果
    27
    for (int i = 0; i < n; i++)
        28
    printf("%d %d", ⑤);
    29
    return 0;
    30
}
