#include<bits/stdc++.h>
using namespace std;

struct node {
    char data;
    int left, right;
} BTree[7];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 7; i++) {
        cin >> BTree[i].data;
        cin >> BTree[i].left;
        cin >> BTree[i].right;
    }


    return 0;
}
