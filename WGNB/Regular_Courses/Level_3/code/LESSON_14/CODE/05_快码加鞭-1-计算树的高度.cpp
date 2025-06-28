#include<bits/stdc++.h>
using namespace std;

struct node {
    char data;
    int left, right;
} BTree[27];

int getDepth(int root) {
    if (root == 0) return 0;
    int l = getDepth(BTree[root].left);
    int r = getDepth(BTree[root].right);
    return max(l + 1, r + 1);
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> BTree[i].data;
        cin >> BTree[i].left;
        cin >> BTree[i].right;
    }
    cout << getDepth(1);

    return 0;
}
