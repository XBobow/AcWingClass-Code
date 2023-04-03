#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int s, t, n;

struct Range {
    int l, r;
} range[N];

int main() {

    scanf("%d%d%d", &s, &t, &n);

    int l, r;
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &l, &r);
        range[i] = {l, r};
    }


    return 0;
}