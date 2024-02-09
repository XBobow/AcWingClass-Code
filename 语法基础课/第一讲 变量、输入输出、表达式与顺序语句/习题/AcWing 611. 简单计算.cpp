#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    int x1, n1, x2, n2;
    double v1, v2;

    cin >> x1 >> n1 >> v1 >> x2 >> n2 >> v2;

    printf("VALOR A PAGAR: R$ %.2lf", n1 * v1 + n2 * v2);

    return 0;
}