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

    double array[] = {a, b, c};
    sort(array, array + 3);

    a = array[2], b = array[1], c = array[0];

    if (a >= b + c) printf("NAO FORMA TRIANGULO\n");
    else {
        if (square(a) == square(b) + square(c)) printf("TRIANGULO RETANGULO\n");
        if (square(a) > square(b) + square(c)) printf("TRIANGULO OBTUSANGULO\n");
        if (square(a) < square(b) + square(c)) printf("TRIANGULO ACUTANGULO\n");
        if (a == b && b == c) printf("TRIANGULO EQUILATERO\n");
        else if (a == b || b == c || a == c) printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}