#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int n;
const int N = 20;
bool st[N];

void dfs(int u) {
    if (u > n) {
        for (int i = 1; i <= n; i++)
            if (st[i])
                cout << i << " ";
        cout << endl;
        return;
    }

    st[u] = false;
    dfs(u + 1);

    st[u] = true;
    dfs(u + 1);
}

int main() {

    cin >> n;

    dfs(1);

    return 0;
}