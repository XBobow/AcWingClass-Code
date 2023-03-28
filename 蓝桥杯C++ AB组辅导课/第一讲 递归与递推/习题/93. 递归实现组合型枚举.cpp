#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int n, m;
const int N = 25;
bool st[N];

void dfs(int u, int start) {
    //无解，剪枝
    if (u + n - start < m) return;

    if (u == m + 1) {
        for (int i = 1; i <= n; i++)
            if (st[i])
                cout << i << " ";
        cout << endl;
        return;
    }

    for (int i = start; i <= n; i++) {
        if (!st[i]) {
            st[i] = true;
            dfs(u + 1, i + 1);
            st[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    dfs(1, 1);
    return 0;
}