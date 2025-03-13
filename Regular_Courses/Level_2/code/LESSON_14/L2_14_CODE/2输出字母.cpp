#include<bits/stdc++.h>
using namespace std;

struct node {
    char data; //数据
    node *next; //指向下一个结点的指针
};

int main() {
    node a = {'A', NULL};
    node b = {'B', NULL};
    node c = {'C', NULL};
    node d = {'D', NULL};
    node e = {'E', NULL};
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    node *p = &a; //创建指针,指向第一个结点
    while (p != NULL) {
        cout << p->data; //当前结点的数据
        p = p->next; //指向下一个结点
    }
    return 0;
}
