#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

    double r;
    cin >> r;

    printf("VOLUME = %.3lf", (4 / 3.0) * 3.14159 * pow(r, 3));

    return 0;
}