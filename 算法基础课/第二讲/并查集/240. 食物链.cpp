#include <bits/stdc++.h>
#include <cstdio>
//#include <iostream>
using namespace std;

const int N = 50010;

int n, k, cnt;
int p[N], eat[N],be[N];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {

    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) p[i] = i;

    int d, x, y;
    while (k--) {
        scanf("%d%d%d", &d, &x, &y);
        if (x > n || y > n) cnt++;
        else if (d == 1) {
            if (find())
        } else {
            if (x == y) cnt++;
            else[]
        }

    }
    return 0;
}