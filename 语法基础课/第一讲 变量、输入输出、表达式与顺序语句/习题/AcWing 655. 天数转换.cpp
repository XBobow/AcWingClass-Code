#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    int age, year, mouth, day;
    cin >> age;

    year = age / 365;
    age %= 365;
    mouth = age / 30;
    day = age % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)", year, mouth, day);

    return 0;
}