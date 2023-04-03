#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e5 + 10;

int n;

struct Range {
    int l, r;

    bool operator<(const Range &R) const {
        return l < R.l;
    }
} range[N];

int max_r[N];

int main() {

    scanf("%d", &n);

    int l, r;
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &l, &r);
        range[i] = {l, r};
    }

    sort(range, range + n);

    int res = 0;
    max_r[0] = -2e9;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < res; j++) {
            if (range[i] > max_r[j]) max_r[j] = range[i].r;
        }
        res++;
        max_r[res] = range[i].r;
    }

    printf("%d\n", res);

    return 0;
}