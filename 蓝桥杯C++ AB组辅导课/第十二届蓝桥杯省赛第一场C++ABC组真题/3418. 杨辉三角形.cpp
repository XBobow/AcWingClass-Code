#include <iostream>

using namespace std;

int n;

long long c(int a, int b) {
    long long res = 1;
    for (int i = a, j = 1; j <= b; i--, j++) {
        res = res * i / j;
        if (res > n) return res;
    }
    return res;
}

bool check(int k) {
    long long l = 2 * k, r = max((long long) n, l);
    while (l < r) {
        long long mid = l + r >> 1;
        if (c(mid, k) >= n) r = mid;
        else l = mid + 1;
    }

    if (c(r, k) != n) return false;

    cout << r * (r + 1) / 2 + k + 1 << endl;
    return true;
}

int main() {

    cin >> n;

    for (int i = 16; i >= 0; i--)
        if (check(i))
            break;

    return 0;
}