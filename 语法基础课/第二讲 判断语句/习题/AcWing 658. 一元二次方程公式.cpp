#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

double square(double x) {
    return pow(x, 2);
}

int main() {

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double r1, r2;
    if (a == 0 || square(b) - 4 * a * c < 0) printf("Impossivel calcular");
    else {
        r1 = (-b + sqrt(square(b) - 4 * a * c)) / (2 * a);
        r2 = (-b - sqrt(square(b) - 4 * a * c)) / (2 * a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    }

    return 0;
}