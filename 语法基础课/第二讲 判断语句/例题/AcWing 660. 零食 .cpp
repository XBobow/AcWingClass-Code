#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    double sum;
    int x, y;
    cin >> x >> y;

    if (x == 1) sum = y * 4.00;
    else if (x == 2) sum = y * 4.50;
    else if (x == 3) sum = y * 5.00;
    else if (x == 4) sum = y * 2.00;
    else sum = y * 1.50;

    printf("Total: R$ %.2lf", sum);


    return 0;
}