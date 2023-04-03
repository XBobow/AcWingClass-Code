#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e5 + 10;

int n;

struct Range {
    int l, r;

    bool operator<(const Range &R) const {
        return r < R.r;
    }
} range[N];

int main() {

    scanf("%d", &n);

    int a, b;
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &a, &b);
        range[i] = {a, b};
    }

    sort(range, range + n);

    int res = 0, ed = -2e9;
    for (int i = 0; i < n; i++) {
        if (range[i].l > ed) {
            res++;
            ed = range[i].r;
        }
    }

    printf("%d\n", res);

    return 0;
}