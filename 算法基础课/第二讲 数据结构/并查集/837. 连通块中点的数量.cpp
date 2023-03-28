#include <bits/stdc++.h>
#include <string>
#include <cstdio>
//#include <iostream>
using namespace std;

const int N = 1e5 + 10;

int n, m;
int p[N], cnt[N];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {

    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i++) { //初始化
        p[i] = i;
        cnt[i] = 1;
    }

    char op[2];
    int a, b;
    while (m--) {
        scanf("%s", op);

        if (!strcmp(op, "C")) {
            scanf("%d%d", &a, &b);
            a = find(a), b = find(b);
            if (a != b) {
                p[a] = p[b];
                cnt[b] += cnt[a];
            }
        } else if (!strcmp(op, "Q1")) {
            scanf("%d%d", &a, &b);
            if (find(a) == find(b)) puts("Yes");
            else puts("No");
        } else {
            scanf("%d", &a);
            cout << cnt[find(a)] << endl;
        }
    }

    return 0;
}