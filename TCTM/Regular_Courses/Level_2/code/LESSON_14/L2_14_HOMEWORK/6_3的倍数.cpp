#include<iostream>
using namespace std;

struct node {
    int data;
    node *next;
} *head, *tail, *p;

int main() {
    int n;
    tail = head = new node;
    while (true) {
        cin >> n;
        if (n == -1) break;
        p = new node;
        p->data = n;
        p->next = NULL;
        tail->next = p;
        tail = p;
    }
    p = head;
    while (p->next != NULL) {
        p = p->next;
        if (p->data % 3 == 0) cout << p->data << ' ';
    }
    return 0;
}
