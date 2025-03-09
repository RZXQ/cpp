/*
6749 链表删除结点2

Description
创建一个链表，按顺序存储1~5数字。删除含有数字n的结点(1≤n≤5)，从链表首结点依次输出链表中的数据。

Input
一个整数表示n。

Output
从首结点依次输出链表中的数据，数字之间空格分隔。

Sample Input 1
1

Sample Output 1
2 3 4 5
*/
#include <iostream>
using namespace std;

// Define the node structure for the linked list
struct node {
    int data; // Stores the integer value of the node
    node *next; // Pointer to the next node
};

int main() {
    // Initialize the linked list with values 1 to 5
    node n1 = {1, NULL};
    node n2 = {2, NULL};
    node n3 = {3, NULL};
    node n4 = {4, NULL};
    node n5 = {5, NULL};

    // Link the nodes to form the list: 1 -> 2 -> 3 -> 4 -> 5
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    // Initialize pointers: p for traversal, head to track the list's start
    node *p = &n1;
    node *head = &n1;

    // Read the value n to delete
    int n;
    cin >> n;

    // Traverse the list to find and delete the node with value n
    while (p != NULL) {
        // Case 1: If the head node has value n, update head to skip it
        if (p->data == n) {
            head = p->next; // Move head to the next node
            p->next = NULL; // Disconnect the deleted node
            break;
        }
        // Case 2: If the next node has value n, skip it by updating the pointer
        if (p->next->data == n) {
            p->next = p->next->next; // Skip the node with value n
            break;
        }
        // Move to the next node if n is not found yet
        p = p->next;
    }

    // Reset p to the updated head for printing
    p = head;
    // Print the remaining list with spaces between values
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    return 0;
}
