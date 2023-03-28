#include <bits/stdc++.h>
#include <cstdio>
//#include <iostream>
using namespace std;

const int N = 1e6 + 10;

int n, k;
int a[N], q[N];

int main() {

    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int hh = 0, tt = -1;
    for (int i = 0; i < n; i++) {
        if (hh <= tt && i - k + 1 > q[hh]) hh++;

        while (hh <= tt && a[i] <= a[q[tt]]) tt--;
        q[++tt] = i;

        if (i >= k - 1) printf("%d ", a[q[hh]]);

    }

    puts("");

    hh = 0, tt = -1;
    for (int i = 0; i < n; i++) {
        if (hh <= tt && i - k + 1 > q[hh]) hh++;

        while (hh <= tt && a[i] >= a[q[tt]]) tt--;
        q[++tt] = i;

        if (i >= k - 1) printf("%d ", a[q[hh]]);

    }

    puts("");

    return 0;
}