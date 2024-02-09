#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    double n1, n2, n3, n4;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    double x = 0.2 * n1 + 0.3 * n2 + 0.4 * n3 + 0.1 * n4;
    printf("Media: %.1lf\n", x);
    if (x >= 7) printf("Aluno aprovado.\n");
    else if (x < 5) printf("Aluno reprovado.\n");
    else {
        printf("Aluno em exame.\n");
        double y;
        scanf("%lf", &y);
        printf("Nota do exame: %.1lf\n", y);
        double z = (x + y) / 2;
        if (z >= 5) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", z);
    }

    return 0;
}