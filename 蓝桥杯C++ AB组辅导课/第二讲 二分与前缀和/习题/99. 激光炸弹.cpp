#include <bits/stdc++.h>
//#include <iostream>
#include "cstdio"

using namespace std;

const int N = 5010;

int k, r;
int s[N][N];

int main() {
    scanf("%d%d", &k, &r);
    r = min(5001, r);
    int n = r, m = r;
    for (int i = 0, x, y, w; i < k; i++) {
        scanf("%d%d%d", &x, &y, &w);
        x++, y++;
        s[x][y] += w;
        n = max(x, n), m = max(y, m);
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            s[i][j] += s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1];
    }

    int res = 0;
    for (int i = r; i <= n; i++)
        for (int j = r; j <= m; j++)
            res = max(res, s[i][j] - s[i][j - r] - s[i - r][j] + s[i - r][j - r]);

    cout << res << endl;

    return 0;
}