/*
6751 链表插入结点

Description
创建一个链表，按顺序存储1~5数字。在数字n前（1<n≤5）插入数字m(1<m<2^31 )，从首结点依次输出链表中的数据。

Input
一行两个整数，分别表示n和m。

Output
从首结点依次输出链表中的数据，数字之间空格分隔。

Sample Input 1
3 9

Sample Output 1
1 2 9 3 4 5
*/

#include <iostream>
using namespace std;

// Define the structure for a linked list node
struct node {
    int data; // Stores the node data
    node *next; // Pointer to the next node
};

int main() {
    // Initialize five nodes with values 1 through 5
    node n1 = {1, NULL};
    node n2 = {2, NULL};
    node n3 = {3, NULL};
    node n4 = {4, NULL};
    node n5 = {5, NULL};

    // Link the nodes to form the list: n1 -> n2 -> n3 -> n4 -> n5
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    int n, m;
    // Read the integer n (the reference node value) and m (the value to insert)
    cin >> n >> m;

    // Traverse the list to find the node before which we want to insert the new node
    // Note: This implementation does not consider insertion at the head or at the end.
    node *p = &n1;
    while (p->next != NULL) {
        if (p->next->data == n) {
            break;
        }
        p = p->next;
    }

    // Create a new node with the value m
    node n6 = {m, NULL};
    // Set the new node's 'next' pointer to the current node's next
    n6.next = p->next;
    // Link the current node to the new node, effectively inserting it into the list
    p->next = &n6;

    // Reset the pointer to the head of the list and print all node values
    p = &n1;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    return 0;
}
