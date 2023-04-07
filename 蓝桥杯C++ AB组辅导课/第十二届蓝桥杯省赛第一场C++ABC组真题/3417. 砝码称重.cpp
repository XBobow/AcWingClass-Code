#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

const int N = 110, M = 2e5 + 10;

int n, sum;
int w[N];
int f[N][M];

int main() {

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &w[i]);
        sum += w[i];
    }

    f[0][0] = true;//初始化

    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= sum; j++) {
            f[i][j] = f[i - 1][j] || f[i - 1][abs(j - w[i])] || f[i - 1][j + w[i]];
        }

    int ans = 0;
    for (int i = 1; i <= sum; i++)
        if (f[n][i]) ans++;

    printf("%d\n", ans);

    return 0;
}