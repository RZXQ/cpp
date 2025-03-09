/*
2860 输出字母

Description
创建5个结构体变量，分别存储字母 ′A′ ~ ′E′ ，5个变量链接成一个链表。从第一个结点依次输出链表中的数据。

Input
此题无输入

Output
一行，大写字母A到E。

Sample Input 1
无

Sample Output 1
ABCDE
*/

#include <iostream>
using namespace std;

// Define a node structure for the linked list
struct node {
    char data; // Character data stored in the node
    node *next; // Pointer to the next node
};

int main() {
    // Initialize nodes with data and a NULL pointer for the next node
    node a = {'A', NULL};
    node b = {'B', NULL};
    node c = {'C', NULL};
    node d = {'D', NULL};
    node e = {'E', NULL};

    // Link the nodes to form the linked list
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;

    // Use a pointer to traverse the list starting from the head node
    node *p = &a;
    while (p != NULL) {
        cout << p->data; // Print the data of the current node
        p = p->next; // Move to the next node
    }

    return 0; // End of the program
}
