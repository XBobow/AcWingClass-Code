#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b) printf("Perimetro = %.1lf", a + b + c);
    else printf("Area = %.1lf", (a + b) * c / 2);

    return 0;
}