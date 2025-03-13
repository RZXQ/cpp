#include<bits/stdc++.h>
using namespace std;

struct node {
    char data;
    int left, right;
} BTree[10];

//1、先序遍历
void preOrder(int root) {
    if (root >= 0) {
        cout << BTree[root].data;
        preOrder(BTree[root].left);
        preOrder(BTree[root].right);
    }
}

//2、中序遍历
void inOrder(int root) {
    if (root >= 0) {
        inOrder(BTree[root].left);
        cout << BTree[root].data;
        inOrder(BTree[root].right);
    }
}

//3、后序遍历
void postOrder(int root) {
    if (root >= 0) {
        postOrder(BTree[root].left);
        postOrder(BTree[root].right);
        cout << BTree[root].data;
    }
}

int main() {
    //输入n个结点
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> BTree[i].data;
        cin >> BTree[i].left;
        cin >> BTree[i].right;
    }
    //遍历
    preOrder(0);
    cout << endl;
    inOrder(0);
    cout << endl;
    postOrder(0);
    return 0;
}
