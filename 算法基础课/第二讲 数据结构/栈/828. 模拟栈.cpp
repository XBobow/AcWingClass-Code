#include <bits/stdc++.h>
#include <cstdio>
//#include <iostream>
using namespace std;

const int N = 1e5 + 10;

int m, top;
int stk[N];

void init() {
    top = -1;
}

void push(int e) {
    stk[++top] = e;
}

void pop() {
    top--;
}

bool empty() {
    if (top == -1) return true;
    return false;
}

int query() {
    return stk[top];
}

int main() {

    init();

    cin >> m;

    while (m--) {
        string op;

        cin >> op;
        int x;

        if (op == "push") {
            cin >> x;
            push(x);
        } else if (op == "pop") {
            pop();
        } else if (op == "query") {
            cout << query() << endl;
        } else if (op == "empty") {

            if (empty()) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}