#include <bits/stdc++.h>
#include <cstdio>
//#include <iostream>
using namespace std;

const int N = 1e5 + 10;

int n, top = -1;
int stk[N];

bool empty() {
    if (top == -1) return true;
    else return false;
}

int main() {

    cin >> n;

    while (n--) {
        int x;
        cin >> x;

        while (!empty() && stk[top] >= x) top--;
        if (empty()) {
            cout << -1 << " ";
            stk[++top] = x;
        } else {
            cout << stk[top] << " ";
            stk[++top] = x;
        }
    }

    cout << endl;


    return 0;
}