#include <bits/stdc++.h>
#include "cstdio"
//#include <iostream>
using namespace std;

const int N = 1010;

int n;
int a[N], f[N];

int main() {

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    for (int i = 1; i <= n; i++)
        f[i] = 1;

    for (int i = 2; i <= n; i++)
        for (int j = 1; j < i; j++) {
            if (a[i] > a[j])
                f[i] = max(f[i], f[j] + 1);
        }

    int res = 0;
    for (int i = 1; i <= n; i++) res = max(res, f[i]);

    cout << res << endl;

    return 0;
}