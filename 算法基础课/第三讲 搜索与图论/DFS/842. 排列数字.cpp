#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
const int N = 10;

int n, path[N];
bool t[N];

void dfs(int u) {
    if (u == n) {
        for (int i = 0; i < n; i++) cout << path[i] << " ";
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
        if (!t[i]) {
            path[u] = i;
            t[i] = true;
            dfs(u + 1);
            t[i] = false;
        }
}

int main() {
    cin >> n;

    dfs(0);

    return 0;
}