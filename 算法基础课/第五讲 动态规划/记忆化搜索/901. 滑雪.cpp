#include <iostream>
#include <cstring>

using namespace std;

const int N = 310;

int n, m;
int g[N][N];
int f[N][N];

int dx[] = {0, 0, -1, 1}, dy[] = {1, -1, 0, 0};

int dp(int x, int y) {
    if (f[x][y] != -1) return f[x][y];

    f[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int a = x + dx[i], b = y + dy[i];
        if (a >= 1 && a <= n && b >= 1 && b <= m && g[x][y] > g[a][b])
            f[x][y] = max(f[x][y], dp(a, b) + 1);
    }

    return f[x][y];
}

int main() {

    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &g[i][j]);

    memset(f, -1, sizeof f);

    int res = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            res = max(res, dp(i, j));

    printf("%d\n", res);

    return 0;
}