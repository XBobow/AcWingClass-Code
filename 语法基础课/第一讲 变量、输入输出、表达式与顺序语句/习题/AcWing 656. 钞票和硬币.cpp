#include <cstdio>

int main()
{
    double m;
    scanf("%lf", &m);
    int n = m * 100;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n / 10000); n %= 10000;
    printf("%d nota(s) de R$ 50.00\n", n / 5000); n %= 5000;
    printf("%d nota(s) de R$ 20.00\n", n / 2000); n %= 2000;
    printf("%d nota(s) de R$ 10.00\n", n / 1000); n %= 1000;
    printf("%d nota(s) de R$ 5.00\n", n / 500); n %= 500;
    printf("%d nota(s) de R$ 2.00\n", n / 200); n %= 200;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", n / 100); n %= 100;
    printf("%d moeda(s) de R$ 0.50\n", n / 50); n %= 50;
    printf("%d moeda(s) de R$ 0.25\n", n / 25); n %= 25;
    printf("%d moeda(s) de R$ 0.10\n", n / 10); n %= 10;
    printf("%d moeda(s) de R$ 0.05\n", n / 5); n %= 5;
    printf("%d moeda(s) de R$ 0.01\n", n / 1); n %= 1;

    return 0;
}
