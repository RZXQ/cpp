#include<iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

int main() {
    node a = {1,NULL};
    node b = {2,NULL};
    node c = {3,NULL};
    node d = {4,NULL};
    node e = {5,NULL};
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    int n;
    cin >> n;
    node *p = &a; //p指向首结点
    node *head = &a; //head指向首结点
    while (p != NULL) {
        if (n == p->data) {
            //n等于首结点的值
            head = p->next; //指向下一个结点
            p->next = NULL; //首结点next指向NULL 良好的习惯,不执行这条语句也可以
            break;
        }
        if (p->next->data == n) {
            p->next = p->next->next;
            break;
        }
        p = p->next;
    }
    p = head; //p指向首结点
    while (p != NULL) {
        cout << p->data << ' ';
        p = p->next;
    }
    return 0;
}
