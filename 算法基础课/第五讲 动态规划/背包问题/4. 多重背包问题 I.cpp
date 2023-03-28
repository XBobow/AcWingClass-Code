#include <bits/stdc++.h>
#include "cstdio"
//#include <iostream>
using namespace std;

const int N = 110;

int n, m;
int v[N], w[N], s[N], f[N];

int main() {

    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i++)
        scanf("%d%d%d", &v[i], &w[i], &s[i]);

    for (int i = 1; i <= n; i++)
        for (int j = m; j >= v[i]; j--)
            for (int k = 0; k * v[i] <= j && k <= s[i]; k++)
                f[j] = max(f[j], f[j - k * v[i]] + k * w[i]);

    cout << f[m] << endl;

    return 0;
}