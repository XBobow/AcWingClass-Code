#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    if (a % b == 0 || b % a == 0) printf("Sao Multiplos");
    else printf("Nao sao Multiplos");

    return 0;
}