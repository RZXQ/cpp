#include<bits/stdc++.h>
using namespace std;
string post, mid;

struct node {
    char data;
    int left, right;
} BTree[30];

int p = 0;

int getTree(int pl, int pr, int ml, int mr) {
    if (ml > mr) return -1;
    int t = p++;
    BTree[t].data = post[pr];
    int i = ml;
    while (i <= mr && post[pr] != mid[i]) i++;
    int len = i - ml;
    BTree[t].left = getTree(pl, pl + len - 1, ml, i - 1);
    BTree[t].right = getTree(pl + len, pr - 1, i + 1, mr);
    return t;
}

void preOrder(int root) {
    if (root >= 0) {
        cout << BTree[root].data;
        preOrder(BTree[root].left);
        preOrder(BTree[root].right);
    }
}

int main() {
    cin >> mid >> post;
    int n = mid.size();
    int root = getTree(0, n - 1, 0, n - 1);
    preOrder(root);
    return 0;
}
