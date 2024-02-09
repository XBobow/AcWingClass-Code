#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    double before, after;
    scanf("%lf", &before);

    double up;
    if (before <= 400) up = 0.15;
    else if (before <= 800) up = 0.12;
    else if (before <= 1200) up = 0.10;
    else if (before <= 2000) up = 0.07;
    else up = 0.04;

    after = (1 + up) * before;
    printf("Novo salario: %.2lf\n", after);
    printf("Reajuste ganho: %.2lf\n", after - before);
    printf("Em percentual: %.0lf %\n", up * 100);

    return 0;
}