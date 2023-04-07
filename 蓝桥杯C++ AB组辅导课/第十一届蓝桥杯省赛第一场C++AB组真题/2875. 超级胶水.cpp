#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1e5 + 10;

int n;


int main() {

    scanf("%d", &n);

    int w;
    long long sum = 0, res = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &w);
        sum += res * w;
        res += w;
    }

    printf("%lld\n", sum);

    return 0;
}