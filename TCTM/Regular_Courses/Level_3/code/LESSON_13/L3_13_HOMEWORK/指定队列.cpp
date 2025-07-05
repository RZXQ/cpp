#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
    node *prev;
};

int main() {
    int n;
    cin >> n;
    node *head = new node; //头指针指向首结点
    head->data = 1; //1号同学
    head->next = NULL; //初始化
    head->prev = NULL;
    node *p; //指向新结点
    int k, q; //q为0或1,若p为0则表示将i号同学插入到k号同学左边，否则插入右边
    for (int i = 2; i <= n; i++) {
        //2~n号同学依次入队
        p = new node;
        p->data = i; //i号同学
        p->next = NULL; //初始化
        p->prev = NULL;
        cin >> k >> q;
        node *t = head; //临时指针t遍历链表寻找k号同学
        if (q == 0) {
            //左边插入
            if (head->data == k) {
                //头部插入结点
                p->next = t;
                t->prev = p;
                head = p;
                continue;
            }
            while (t != NULL) {
                //中间插入
                if (t->data == k) {
                    p->next = t;
                    p->prev = t->prev;
                    t->prev->next = p;
                    t->prev = p;
                    break;
                }
                t = t->next;
            }
        } else {
            //右边插入
            while (t != NULL) {
                if (t->data == k && t->next == NULL) {
                    //尾插
                    p->prev = t;
                    t->next = p;
                    break;
                }
                if (t->data == k) {
                    //中间插入
                    p->next = t->next;
                    p->prev = t;
                    t->next->prev = p;
                    t->next = p;
                    break;
                }
                t = t->next;
            }
        }
    }
    p = head;
    while (p != NULL) {
        cout << p->data << ' ';
        p = p->next;
    }
    return 0;
}

/*
6
1 0
1 1
2 0
3 1
2 1

4 2 6 1 3 5
*/
