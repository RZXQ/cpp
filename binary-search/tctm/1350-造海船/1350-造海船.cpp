/*
Description
明朝郑和下西洋，需要建造庞大的海船，需要足够的木料，因为那时候没有钢铁制造的船，现在有 n 根原木，现在想把这些木头切割成 k 段长度均为 l 的小段木头（木头有可能有剩余），用来制造船的部件。
当然，工匠希望得到的小段木头越长越好，这样可以让船更大一些不浪费木料，请求出 l 的最大值。
原木的长度都是正整数，我们要求切割得到的小段木头的长度也是正整数。
例如有两根原木长度分别为 11 和 21，要求切割成等长的 6 段，很明显能切割出来的小段木头长度最长为 5。
现在希望你能用现代科技可以帮助他们计算出来。

Input
第一行是两个正整数 n,k，分别表示原木的数量，需要得到的小段的数量。
接下来 n 行，每行一个正整数 Li，表示一根原木的长度。

Output
仅一行，即 l 的最大值。
如果连 1cm 长的小段都切不出来，输出 0。

Sample Input 1
3 7
232
124
456

Sample Output 1
114

Hint
数据规模与约定
对于 100% 的数据，有 1≤n≤10^5，1≤k≤10^8，1≤Li≤10^8(i∈[1,n])。
*/
using namespace std;
#include <iostream>

int n, k; // n 为原木数量, k 为分段数量
int a[100005]; // 存储每根原木头长度

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // 1. 确定寻找范围
    int L = 1, R = 1000000000;
    int mid;
    int ans = 0; // 记录答案

    // 二分查找
    while (L <= R) {
        // 2. 取中间值
        mid = (L + R) / 2;

        // 3. 计算切割后的数量
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            cnt = cnt + a[i] / mid;
        }

        // 4. 验证并调整范围
        if (cnt < k) {
            R = mid - 1;
        } else {
            ans = mid; // 记录答案
            L = mid + 1;
        }
    }

    cout << ans;
    return 0;
}