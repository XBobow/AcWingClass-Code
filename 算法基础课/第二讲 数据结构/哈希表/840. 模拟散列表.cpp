#include <bits/stdc++.h>
#include <cstdio>
//#include <iostream>
using namespace std;

const int N = 100003;

int n, idx;
int hs[N], e[N], ne[N];

void insert(int x) {
    int k = (x % N + N) % N;
    e[idx] = x;
    ne[idx] = hs[k];
    hs[k] = ne[idx++];
}

bool query(int x) {
    int k = (x % N + N) % N;
    for (int i = hs[k]; i != -1; i = ne[i]) {
        if (e[i] == x) return true;
    }
    return false;
}

int main() {

    memset(hs, 0x3f, sizeof hs);

    scanf("%d", &n);

    while (n--) {
        char op;
        int x;
        scanf(" %c%d", &op, &x);

        if (op == 'I') {
            insert(x);
        } else {
            if (query(x)) puts("Yes");
            else puts("No");
        }
    }

    return 0;
}