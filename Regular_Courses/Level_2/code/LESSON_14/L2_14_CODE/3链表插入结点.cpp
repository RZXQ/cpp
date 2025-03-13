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
    node d = {4, NULL};
    node e = {5, NULL};
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    int n; //插入的位置  
    node f; //新的结点
    cin >> n >> f.data;
    node *p = &a; //指向链表第一个结点
    while (p != NULL) {
        if (p->next->data == n) {
            //找到插入位置的前一个结点
            f.next = p->next;
            p->next = &f;
            break;
        }
        p = p->next; //指向下一个结点
    }
    p = &a; //指向链表第一个结点
    while (p != NULL) {
        cout << p->data << ' ';
        p = p->next;
    }
    return 0;
}
