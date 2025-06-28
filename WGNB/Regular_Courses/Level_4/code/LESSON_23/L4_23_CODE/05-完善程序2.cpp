#include <iostream>
using namespace std;
typedef long long LL;
LL k, sum, n;

void dfs(int dep) {
    if (dep == 2 * n) {
        if (!k) sum++;
        return;
    }
    if (k > 0) {
        k--;
        dfs(dep + 1);
        k++;
    }
    k++;
    dfs(dep + 1);
    k--;
}

int main() {
    scanf("%lld", &n);
    k = 0; //售票处50元的张数
    sum = 0;
    dfs(0);
    printf("%lld", sum);
    return 0;
}
