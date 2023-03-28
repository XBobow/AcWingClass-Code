#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

const int N = 100010;
long long a[N], cnt[N];
int n, k;

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)cin >> a[i], a[i] += a[i - 1];

    long long res = 0;
    cnt[0] = 1;
    for (int i = 1; i <= n; i++) {
        res += cnt[a[i] % k];
        cnt[a[i] % k]++;
    }

    cout << res << endl;

    return 0;
}