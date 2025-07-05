#include<bits/stdc++.h>
using namespace std;

struct node {
    char data;
    int left, right;
} BTree[10];

char s[10];
int i = 0;
int p = 0; //数组元素下标 全局变量
int createTree() {
    char c = s[i];
    i++;
    if (c == '#') return -1; //表示为空结点
    int t = p++; //局部变量，当前作用域内的下标
    BTree[t].data = c;
    BTree[t].left = createTree();
    BTree[t].right = createTree();
    return t;
}

int main() {
    cin >> s;
    createTree();
    cout << "二叉树的结点数：" << p;
    return 0;
}
