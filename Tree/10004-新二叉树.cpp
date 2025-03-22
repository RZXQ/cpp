/*
10004 新二叉树

Description
输入一串二叉树，输出其前序遍历。

Input
第一行为二叉树的节点数 n。(1≤n≤26)
后面 n 行，每一个字母为节点，后两个字母分别为其左右儿子。特别地，数据保证第一行读入的节点必为根节点。
空节点用 * 表示

Output
二叉树的前序遍历。

Sample Input 1
6
abc
bdi
cj*
d**
i**
j**

Sample Output 1
abdicj
*/

# include <iostream>
using namespace std;

// Define the structure for a binary tree node
struct node {
    char data; // Character data held in the node
    int left; // Array index of this node's left child (-1 if no child)
    int right; // Array index of this node's right child (-1 if no child)
} bTree[30]; // Maximum 26 English letters, array indexed by letter's ascii position

// Recursive function to perform pre-order traversal (Root -> Left -> Right)
void preOrder(int root) {
    if (root >= 0) {
        // Check for valid node (positive index)
        cout << bTree[root].data; // Process current node: print data
        preOrder(bTree[root].left); // Traverse left subtree recursively
        preOrder(bTree[root].right); // Traverse right subtree recursively
    }
}

// Main program entry point
int main() {
    int n; // Number of nodes in the binary tree
    cin >> n; // Input the total number of nodes

    int root; // Index of the root node in the array representation

    // Loop to read each node and its children
    for (int i = 1; i <= n; i++) {
        char a, b, c;
        cin >> a >> b >> c; // Read current node and its left/right children characters

        if (i == 1) {
            // First input node is guaranteed to be root node
            root = a - 'a'; // Root node's array index
        }

        bTree[a - 'a'].data = a; // Store the current node's character data

        // Handle left child node
        if (b != '*') {
            bTree[a - 'a'].left = b - 'a'; // Assign left child's index
        } else {
            bTree[a - 'a'].left = -1; // Mark as no left child with -1
        }

        // Handle right child node
        if (c != '*') {
            bTree[a - 'a'].right = c - 'a'; // Assign right child's index
        } else {
            bTree[a - 'a'].right = -1; // Mark as no right child with -1
        }
    }

    preOrder(root); // Start pre-order traversal from root index
    return 0; // End of program
}
