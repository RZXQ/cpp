/*
2861 N个整数

Description
大熊想要编写一个程序，实现持续输入数字，直到输入数字0时停止。在输入结束后，程序需要将输入的数字序列从头到尾和从尾到头各输出一遍。

Input
一行包含多个整数数字，其中最后一个数字为0，每个整数的值均小于231。

Output
两行，第一行将按照正序输出这些数字，第二行倒序输出这些数字，数字之间用空格分隔。

Sample Input 1
1 3 3 1 4 6 2 0

Sample Output 1
1 3 3 1 4 6 2
2 6 4 1 3 3 1
*/

#include <iostream>
using namespace std;

// Define the structure for a doubly linked list node
struct node {
    int data; // Integer value stored in the node
    node *prev; // Pointer to the previous node
    node *next; // Pointer to the next node
};

int main() {
    // Create the head node and allocate its memory
    node *head = new node();

    int n; // Variable for reading input numbers
    cin >> n; // Read the first number from the input
    head->data = n; // Assign the first input number to the head
    head->prev = NULL; // Head node's previous pointer is always NULL
    head->next = NULL; // Temporarily set next pointer as NULL (initially single element)

    node *p = head; // Pointer 'p' to keep track of the current node

    // Keep reading numbers and creating new nodes until '0' is encountered
    while (cin >> n && n != 0) {
        node *newNode = new node(); // Allocate memory for a new node

        newNode->data = n; // Assign data from input to the new node
        newNode->next = NULL; // The new node will be the last, so next is NULL
        p->next = newNode; // Link the current node's next pointer to the new node
        newNode->prev = p; // Link the new node's previous pointer to the current node

        p = p->next; // Move pointer 'p' forward to the newly created node
    }

    node *tail = p; // After input ends, the final node becomes the tail

    // Traverse from head to tail, printing nodes in original order
    p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl; // Endline after forward traversal output

    // Traverse from tail to head, printing nodes in reverse order
    p = tail;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->prev;
    }

    return 0;
}
