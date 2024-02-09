#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    double salary;
    scanf("%lf", &salary);

    if (salary <= 2000) printf("Isento");
    else if (salary <= 3000) printf("R$ %.2lf", (salary - 2000) * 0.08);
    else if (salary <= 4500) printf("R$ %.2lf", 1000 * 0.08 + (salary - 3000) * 0.18);
    else printf("R$ %.2lf", 1000 * 0.08 + 1500 * 0.18 + (salary - 4500) * 0.28);

    return 0;
}