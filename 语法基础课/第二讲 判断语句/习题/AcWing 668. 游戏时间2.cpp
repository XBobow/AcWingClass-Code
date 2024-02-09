#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int h = (c - a + 24) % 24, m = d - b;
    if (m < 0) h = (h - 1 + 24) % 24, m += 60;
    if (h == 0 & m == 0) cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", h, m);


    return 0;
}