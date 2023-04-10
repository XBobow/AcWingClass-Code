#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int n;

int main() {

    scanf("%d", &n);

    int minv = -2e9, maxv = 2e9;
    while (n--) {
        int a, b;
        scanf("%d%d", &a, &b);

        maxv = min(maxv, a / b);
        minv = max(minv, a / (b + 1) + 1);
    }

    printf("%d %d", minv, maxv);

    return 0;
}