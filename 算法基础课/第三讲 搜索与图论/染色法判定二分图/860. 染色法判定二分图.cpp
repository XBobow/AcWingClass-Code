#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

const int N = 1e5, M = 2e5 + 10;

int n, m;
int h[N], e[M], ne[M], idx;
int color[N];

void add(int a, int b) {
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
}

bool dfs(int u, int c) {
    color[u] = c;
    for (int i = h[u]; i != -1; i = ne[i]) {
        int j = e[i];
        if (!color[j]) {
            if (!dfs(j, 3 - c)) return false;
        } else if (color[j] == c) {
            return false;
        }
    }
    return true;
}

bool check() {
    bool flag = true;
    for (int i = 1; i <= n; i++) {
        if (!color[i])
            if (!dfs(i, 1)) {
                flag = false;
                break;
            }
    }

    return flag;
}

int main() {

    scanf("%d%d", &n, &m);

    memset(h, -1, sizeof h);

    int a, b;
    for (int i = 0; i < m; i++) {
        scanf("%d%d", &a, &b);
        add(a, b), add(b, a);
    }

    if (check()) puts("Yes");
    else puts("No");

    return 0;
}