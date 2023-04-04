#include <iostream>
#include <algorithm>
#include <queue>

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

//    错误代码
//    int res = 0;
//    max_r[0] = -2e9;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < res; j++) {
//            if (range[i] > max_r[j]) max_r[j] = range[i].r;
//        }
//        res++;
//        max_r[res] = range[i].r;
//    }
//
//    printf("%d\n", res);

    priority_queue<int, vector<int>, greater<int>> heap;
    for (int i = 0; i < n; i++) {
        auto r = range[i];
        if (heap.empty() || r.l <= heap.top()) heap.push(r.r);
        else {
            heap.pop();
            heap.push(r.r);
        }
    }

    printf("%d\n", heap.size());

    return 0;
}