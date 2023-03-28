#include <bits/stdc++.h>
#include <cstdio>
//#include <iostream>
using namespace std;

const int N = 1e5 + 10;

int m, idx;
int e[N], l[N], r[N];

void init() {
    idx = 2;
    l[1] = 0, r[0] = 1;
}

//右插
void insert(int k, int x) {
    e[idx] = x;
    r[idx] = r[k];
    l[r[k]] = idx;
    r[k] = idx;
    l[idx] = k;
    idx++;
}

void del(int k) {
    r[l[k]] = r[k];
    l[r[k]] = l[k];
}

int main() {

    init();

    scanf("%d", &m);

    while (m--) {
        string op; //op是字符串
        int k, x;

        cin >> op;
        if (op == "L") {
            scanf("%d", &x);
            insert(0, x);
        } else if (op == "R") {
            scanf("%d", &x);
            insert(l[1], x);
        } else if (op == "D") {
            scanf("%d", &k);
            del(k + 1);
        } else if (op == "IL") {
            scanf("%d%d", &k, &x);
            insert(l[k + 1], x);
        } else {
            scanf("%d%d", &k, &x);
            insert(k + 1, x);
        }

        for (int i = r[0]; i != 1; i = r[i]) printf("%d ", e[i]);
        cout << endl;
    }

    for (int i = r[0]; i != 1; i = r[i]) printf("%d ", e[i]);
    cout << endl;

    return 0;
}

//双链表里idx被初始化为2了，所以是k+1，而单链表里idx被初始化为0，所以是k-1
//k - 1 + 2 == k + 1