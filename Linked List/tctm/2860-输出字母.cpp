#include <iostream>
using namespace std;

// Define a node structure for the linked list
struct node {
    char data; // Character data stored in the node
    node *next; // Pointer to the next node
};

int main() {
    // Initialize nodes with data and a NULL pointer for the next node
    node n1 = {'A', NULL};
    node n2 = {'B', NULL};
    node n3 = {'C', NULL};
    node n4 = {'D', NULL};
    node n5 = {'E', NULL};

    // Link the nodes to form the linked list
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    // Use a pointer to traverse the list starting from the head node
    node *p = &n1;
    while (p != NULL) {
        cout << p->data; // Print the data of the current node
        p = p->next; // Move to the next node
    }

    return 0; // End of the program
}
