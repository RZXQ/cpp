#include<bits/stdc++.h>
using namespace std;

struct data {
    int left, right;
} BTree[101];

int getDepth(int root) {
    if (root == 0) return 0;
    int l = getDepth(BTree[root].left);
    int r = getDepth(BTree[root].right);
    int left = l + 1;
    int right = r + 1;
    return max(left, right);
}

int main() {
    int n, a, b;
    cin >> n;
    for (int i = 1; i < n; i++) {
        cin >> a >> b;
        if (BTree[a].left == 0) {
            BTree[a].left = b;
        } else {
            BTree[a].right = b;
        }
    }
    cout << getDepth(1);
    return 0;
}
