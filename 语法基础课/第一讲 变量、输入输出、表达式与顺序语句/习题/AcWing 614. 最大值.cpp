#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    printf("%d eh o maior", max(a, max(b, c)));
    return 0;
}