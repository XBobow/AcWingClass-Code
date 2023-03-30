#include <iostream>
#include <cstdio>

using namespace std;

const int N = 55, MOD = 1e9 + 7;

int n, m, k;
int c[N][N], f[N][N][N];

int main() {

    scanf("%d%d%d", &n, &m, &k);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &c[i][j]);

    int max = -1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            for (int v = 1; v <= k; v++)
                if (c[i][j] > max) {
                    f[i][j][v] = (max(f[i - 1][j][v - 1], f[i][j - 1][v - 1]) + c[i][j])%MOD;
                    max = c[i][j];
                } else {
                    f[i][j][v] = max(f[i - 1][j][v], f[i][j - 1][v]);
                }

    cout << f[n][m][k] << endl;

    return 0;
}