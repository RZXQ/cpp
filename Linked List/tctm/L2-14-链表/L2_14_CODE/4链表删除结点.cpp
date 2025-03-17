#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
};

int main() {
    node a = {1, NULL};
    node b = {2, NULL};
    node c = {3, NULL};
    node d = {4, NULL};
    node e = {5, NULL};
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    int n;
    cin >> n;
    node *p = &a; //指向链表首结点
    while (p != NULL) {
        if (p->next->data == n) {
            p->next = p->next->next;
            break;
        }
        p = p->next;
    }
    p = &a; //指向链表首结点
    while (p != NULL) {
        cout << p->data << ' ';
        p = p->next;
    }
    return 0;
}
