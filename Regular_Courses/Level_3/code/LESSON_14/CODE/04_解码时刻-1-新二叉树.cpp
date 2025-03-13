#include<bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    int left, right;
} BTree[27];

void preOrder(int root) {
    if (root >= 0) {
        cout << BTree[root].data;
        preOrder(BTree[root].left);
        preOrder(BTree[root].right);
    }
}

int main() {
    int n;
    cin >> n;
    int root;
    for (int i = 1; i <= n; i++) {
        char a, b, c;
        cin >> a >> b >> c;
        if (i == 1) {
            root = a - 'a';
        }
        BTree[a - 'a'].data = a; //储存
        if (b != '*') {
            //如果有左儿子
            BTree[a - 'a'].left = b - 'a'; //记录左儿子的下标
        } else {
            BTree[a - 'a'].left = -1;
        }
        if (c != '*') {
            //同上，记录右儿子
            BTree[a - 'a'].right = c - 'a';
        } else {
            BTree[a - 'a'].right = -1;
        }
    }
    preOrder(root);
    return 0;
}
