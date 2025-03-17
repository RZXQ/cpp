#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 10;
const int maxs = 10;
int n;
unsigned a[maxn], b[maxn], res[maxn], ord[maxn];
unsigned cnt[maxs + 1];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d%d", &a[i], &b[i]);
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < n; ++i)
        ++cnt[b[i]]; // 利用 cnt 数组统计数量
    for (int i = 0; i < maxs; ++i)
        cnt[i + 1] += cnt[i];
    for (int i = 0; i < n; ++i)
        ord[--cnt[b[i]]] = i; // 记录初步排序结果
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < n; ++i)
        ++cnt[a[i]]; // 利用 cnt 数组统计数量
    for (int i = 0; i < maxs; ++i)
        cnt[i + 1] += cnt[i];
    for (int i = n - 1; i >= 0; --i)
        res[--cnt[a[ord[i]]]] = ord[i]; // 记录最终排序结果
    for (int i = 0; i < n; i++)
        printf("%d %d", a[res[i]], b[res[i]]);

    return 0;
}
