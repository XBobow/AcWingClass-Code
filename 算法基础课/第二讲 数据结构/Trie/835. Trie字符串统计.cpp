#include <bits/stdc++.h>
#include <cstdio>
//#include <iostream>
using namespace std;

const int N = 1e5 + 10;

int n;
int son[N][26], cnt[N], idx;
char str[N];
//p指层
void insert(char *str) {
    int p = 0;
    for (int i = 0; str[i]; i++) {
        int u = str[i] - 'a';
        if (!son[p][u]) son[p][u] = ++idx;
        p = son[p][u];
    }
    cnt[p]++;
}

int query(char *str) {
    int p = 0;
    for (int i = 0; str[i]; i++) {
        int u = str[i] - 'a';
        if (!son[p][u]) return 0;
        p = son[p][u];
    }
    return cnt[p];
}

int main() {

    scanf("%d", &n);

    char op;
    while (n--) {
        scanf(" %c%s", &op, str);

        if (op == 'I') {
            insert(str);
        } else {
            cout << query(str) << endl;
        }
    }

    return 0;
}