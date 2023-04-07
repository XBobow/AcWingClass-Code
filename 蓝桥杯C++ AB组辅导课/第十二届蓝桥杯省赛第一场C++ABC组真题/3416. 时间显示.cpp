#include <iostream>

using namespace std;

long long t;

int main() {

    scanf("%lld", &t);

    int s = t / 1000 % 60;
    int m = t / 1000 / 60 % 60;
    int h = t / 1000 / 60 / 60 % 24;

    if (h < 10) printf("0");
    printf("%d:", h);
    if (m < 10) printf("0");
    printf("%d:", m);
    if (s < 10) printf("0");
    printf("%d", s);

    return 0;
}