#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    int s, a[7], v[] = {100, 50, 20, 10, 5, 2, 1};
    cin >> s;

    int r = s;
    for (int i = 0; i < 7; i++) {
        a[i] = r / v[i];
        r %= v[i];
    }

    printf("%d\n", s);
    for (int i = 0; i < 7; ++i) {
        printf("%d nota(s) de R$ %d\n,00", a[i], v[i]);
    }

    return 0;
}