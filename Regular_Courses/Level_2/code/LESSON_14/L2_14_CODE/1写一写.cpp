#include<bits/stdc++.h>
using namespace std;

struct node {
    int data; //数据
    node *next; //指向后继结点的指针
};

int main() {
    node a = {1, NULL};
    node b = {2, NULL};
    node c = {3, NULL};
    a.next = &b;
    b.next = &c;
    node *p = &a;
    while (p != NULL) {
        cout << p->data << ' ';
        p = p->next;
    }
    return 0;
}
