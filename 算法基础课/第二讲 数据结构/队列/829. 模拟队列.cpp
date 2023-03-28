#include <bits/stdc++.h>
#include <cstdio>
//#include <iostream>
using namespace std;

const int N = 1e5 + 10;

int m, hh, tt;
int q[N];

void init() {
    hh = 0;
    tt = -1;
}

void push(int x) {
    q[++tt] = x;
}

void pop() {
    hh++;
}

bool empty() {
    if (hh > tt)return true;
    else return false;
}

int query() {
    return q[hh];
}

int main() {

    init();

    cin >> m;

    while (m--) {
        string op;
        int x;

        cin >> op;
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