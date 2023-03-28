#include <bits/stdc++.h>
#include "cstdio"
//#include <iostream>
using namespace std;

const int N = 1e5 + 10;

int n, k;
int h[N], w[N];

bool check(int mid) {
    long long res = 0;
    for (int i = 0; i < n; i++) {
        res += (long long) (h[i] / mid) * (w[i] / mid);
        if (res >= k)return true;
    }
    return false;
}

int main() {

    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d%d", &h[i], &w[i]);

    int l = 0, r = 1e5;
    while (l < r) {
        int mid = (l + r + 1) >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }

    cout << l << endl;

    return 0;
}