#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 10000;

int n;
int a[N];
int f[N][N];
bool st[N];

bool check(int a, int b) {
    int lb = to_string(b).size();
    while (--lb) b /= 10;
    if (a % 10 == b) return true;
    else return false;
}

int main() {

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);

    for (int len = 2; len <= n; len++) {
        for (int i = 1; i + len - 1 <= n; i++) {
            int l = i, r = i + len - 1, pre = r - 1;
            while (st[pre]) pre--;
            if (check(a[r], a[pre]))
                f[l][r] = f[l][pre];
            else {
                f[l][r] = f[l][pre] + 1;
                st[pre] = true;
            }
        }
    }

    printf("%d\n", f[1][n]);

    return 0;
}