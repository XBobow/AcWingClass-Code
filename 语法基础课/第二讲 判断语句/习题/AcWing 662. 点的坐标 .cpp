#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {


    double x, y;
    scanf("%lf %lf", &x, &y);

    if (x == 0 && y == 0) printf("Origem");
    else if (x == 0) printf("Eixo Y");
    else if (y == 0) printf("Eixo X");
    else if (x > 0)
        if (y > 0)printf("Q1");
        else printf("Q4");
    else if (x < 0)
        if (y > 0)printf("Q2");
        else printf("Q3");

    return 0;
}