#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

const int N = 110;
int n, m;
int v[N], w[N], f[N];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        for (int j = 0; j < s; j++) cin >> v[j] >> w[j];
        for (int j = m; j >= 0; j--)
            for (int k = 0; k < s; k++)
                if (j >= v[k])
                    f[j] = max(f[j], f[j - v[k]] + w[k]);
    }
    cout << f[m] << endl;

    return 0;
}