#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int n;
int s[N];

int main() {

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) cout << max(2 * (n - i), 2 * (i - 1)) << endl;


    return 0;
}