#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    double a, b, c;
    cin >> a >> b >> c;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf", a * c / 2,
           3.14159 * c * c, (a + b) * c / 2, b * b, a * b);

    return 0;
}