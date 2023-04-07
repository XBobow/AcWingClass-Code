#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long LL;

int main() {
    LL a, b, n;

    cin >> a >> b >> n;

    LL s = 5 * a + 2 * b;
    LL res = n / s * 7;
    n %= s;

    LL d[] = {a, a, a, a, a, b, b};
    for (int i = 0; n > 0; i++) {
        n -= d[i];
        res++;
    }

    cout << res << endl;
    return 0;
}