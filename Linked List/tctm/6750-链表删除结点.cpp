/*
6750 链表删除结点

Description
创建一个链表，按顺序存储1~5数字。删除含有数字n的结点(1<n≤5)，从链表首结点依次输出链表中的数据。

Input
一个整数表示n。

Output
从首结点依次输出链表中的数据，数字之间空格分隔。

Sample Input 1
3

Sample Output 1
1 2 4 5
*/

#include <iostream>
using namespace std;

// Define the structure for a linked list node.
struct node {
    int data; // Stores the node's data
    node *next; // Pointer to the next node in the list
};

int main() {
    // n > 1 && n <= 5

    // Initialize the nodes with values from 1 to 5.
    node n1 = {1, NULL};
    node n2 = {2, NULL};
    node n3 = {3, NULL};
    node n4 = {4, NULL};
    node n5 = {5, NULL};

    // Link the nodes to form the linked list: n1 -> n2 -> n3 -> n4 -> n5.
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    // Pointer used for traversing the linked list.
    node *p = &n1;

    int n; // The integer value to be deleted from the list.
    cin >> n;

    // Traverse the list to find the node before the node to be deleted.
    // The while loop continues until the end of the list is reached.
    while (p != NULL) {
        // Check if the next node contains the value to be deleted.
        if (p->next->data == n) {
            // When found, bypass the node containing n by linking the current node to the one after next.
            // This also properly handles deletion of the last node containing n.
            p->next = p->next->next;
            break; // Exit the loop once the deletion is done.
        }
        p = p->next; // Move to the next node.
    }

    // Reset the pointer to the head of the list for output.
    p = &n1;

    // Traverse the list again to output the data in each node.
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    return 0;
}
