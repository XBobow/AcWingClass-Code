#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    if (a != b) printf("O JOGO DUROU %d HORA(S)", (b - a + 24) % 24);
    else printf("O JOGO DUROU 24 HORA(S)");

    return 0;
}