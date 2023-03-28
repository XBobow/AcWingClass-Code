#include <bits/stdc++.h>
#include <cstdio>
//#include <iostream>
using namespace std;

const int N = 1e5 + 10;

int n, m;
int p[N];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {

    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) p[i] = i;// 初始化!!!!!!!

    char op;
    int a, b;

    while (m--) {
        scanf(" %c%d%d", &op, &a, &b);
        if (op == 'M') {
            if (find(a) == find(b)) continue;
            else p[find(b)] = find(a);
        } else {
            if (find(a) == find(b)) puts("Yes");
            else puts("No");
        }
    }

    return 0;
}