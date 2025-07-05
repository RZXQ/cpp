#include<bits/stdc++.h>
using namespace std;
string pre, mid;

struct node {
    char data;
    int left, right;
} BTree[30];

int p = 0;

int getTree(int pl, int pr, int ml, int mr) {
    if (ml > mr) return -1;
    int bt = p++;
    BTree[bt].data = pre[pl];
    int i = ml;
    while (i <= mr && pre[pl] != mid[i]) i++;
    int len = i - ml;
    BTree[bt].left = getTree(pl + 1, pl + len, ml, i - 1);
    BTree[bt].right = getTree(pl + len + 1, pr, i + 1, mr);
    return bt;
}

void postOrder(int root) {
    if (root > -1) {
        postOrder(BTree[root].left);
        postOrder(BTree[root].right);
        cout << BTree[root].data;
    }
}

int main() {
    cin >> pre >> mid;
    int n = pre.size();
    int root = getTree(0, n - 1, 0, n - 1);
    postOrder(root);
    cout << endl;

    return 0;
}
