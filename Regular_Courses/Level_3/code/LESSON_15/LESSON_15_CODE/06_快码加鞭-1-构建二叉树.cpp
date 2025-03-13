#include<bits/stdc++.h>
using namespace std;

struct node {
    char data;
    int left, right;
} BTree[130];

void preOrder(int root) {
    if (root >= 0) {
        cout << BTree[root].data;
        preOrder(BTree[root].left);
        preOrder(BTree[root].right);
    }
}

char s[255];
int p = 0, i = 0; //p-下一个可用的数组元素下标，i-要查看的字符下标
int createTree() {
    char c = s[i];
    i--; //下一个字符
    if (c == '.') return -1; //空结点记为-1
    int t = p++;
    BTree[t].data = c;
    BTree[t].right = createTree();
    BTree[t].left = createTree();
    return t;
}

int main() {
    cin >> s;
    i = strlen(s) - 1; //最后一个字符的下标
    int root = createTree();
    preOrder(root);
    return 0;
}
