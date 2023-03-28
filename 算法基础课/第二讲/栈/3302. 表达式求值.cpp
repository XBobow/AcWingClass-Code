#include <bits/stdc++.h>
#include <cstdio>
//#include <iostream>
using namespace std;

const int N = 1e5 + 10;

int top;
int num[N];
char op[N];

void init() {
    top = -1;
}

void push(char e) {
    stk[++top] = e;
}

void pop() {
    top--;
}

bool empty() {
    if (top == -1) return true;
    return false;
}

int main() {

    while (true) {
        char c;
        cin >> c;

        push(c);
        if (c == '+' || c == '-' || c == '*' || c == '/') {

        } else if (c == '(') push('c');
        else if (c == ')') {

        }

        if (empty()) break;
    }

    return 0;
}