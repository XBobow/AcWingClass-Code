#include <bits/stdc++.h>
#include "cstdio"
//#include <iostream>
using namespace std;

const int N = 1e5;

int n;
int h[N];

bool check(int e) {
    for (int i = 1; i <= n; i++) {
        e = 2 * e - h[i];
        //会溢出int
        if (e >= 1e5) return true;
        if (e < 0) return false;
    }
    return true;
}

int main() {

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &h[i]);

    int l = 0, r = N;
    while (l < r) {
        int mid = l + r >> 1;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }

    cout << l << endl;

    cout << INT_MAX << endl;

    return 0;
}