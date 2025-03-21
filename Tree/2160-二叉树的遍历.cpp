/*
2160 二叉树的遍历

Description
给出一个 n 个结点的二叉树，请求出二叉树的前序遍历，中序遍历和后序遍历。

Input
第一行有一个整数 n (0<n≤26)，表示二叉树有 n 个结点；
以下 n 行，每行第一个为一个大写字母表示结点的值，第 i+1 行的结点编号为 i。
后面为两整数，第一个表示该结点左孩子结点编号，第二个表示该结点右孩子的结点编号，如果该编号为 0 0 表示没有；（编号为 1 的结点是树的根）

Output
共三行，第一行为二叉树的前序遍历，第二行为中序遍历，第三行为后序遍历；

Sample Input 1
7
F 2 3
C 4 5
E 0 6
A 0 0
D 7 0
G 0 0
B 0 0

Sample Output 1
FCADBEG
ACBDFEG
ABDCGEF
*/

#include <iostream>
using namespace std;

// Define structure for binary tree nodes
struct node {
    char data; // Node value (character)
    int left; // Index of left child node (0 if none)
    int right; // Index of right child node (0 if none)
} bTree[30]; // Array to store up to 30 nodes

// Pre-order traversal function: Root -> Left subtree -> Right subtree
void preOrder(int root) {
    if (root > 0) {
        cout << bTree[root].data; // Visit and print root node
        preOrder(bTree[root].left); // Recursively traverse left subtree
        preOrder(bTree[root].right); // Recursively traverse right subtree
    }
}

// In-order traversal function: Left subtree -> Root -> Right subtree
void inOrder(int root) {
    if (root > 0) {
        inOrder(bTree[root].left); // Recursively traverse left subtree
        cout << bTree[root].data; // Visit and print root node
        inOrder(bTree[root].right); // Recursively traverse right subtree
    }
}

// Post-order traversal function: Left subtree -> Right subtree -> Root
void postOrder(int root) {
    if (root > 0) {
        postOrder(bTree[root].left); // Recursively traverse left subtree
        postOrder(bTree[root].right); // Recursively traverse right subtree
        cout << bTree[root].data; // Visit and print root node
    }
}

// Main function to read tree structure and perform traversals
int main() {
    int n; // Number of nodes
    cin >> n;

    // Input tree nodes information
    for (int i = 1; i <= n; i++) {
        cin >> bTree[i].data; // Node data
        cin >> bTree[i].left; // Left child index (0 if none)
        cin >> bTree[i].right; // Right child index (0 if none)
    }

    // Perform and display pre-order traversal
    preOrder(1);
    cout << endl;

    // Perform and display in-order traversal
    inOrder(1);
    cout << endl;

    // Perform and display post-order traversal
    postOrder(1);
    cout << endl;

    return 0; // Program ends successfully
}
