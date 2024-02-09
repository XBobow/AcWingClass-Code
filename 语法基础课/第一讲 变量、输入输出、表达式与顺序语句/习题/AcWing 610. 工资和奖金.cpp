#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    char name[10];
    double s, v;
    cin >> name >> s >> v;

    printf("TOTAL = R$ %.2lf", s + 0.15 * v);

    return 0;
}