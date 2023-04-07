#include <iostream>

using namespace std;

int y[5];

int main() {

    for (int i = 0; i < 5; i++) cin >> y[i];

    int res = 0;
    for (int i = 0; i < 5; i++) {
        int g = y[i] % 10;
        int s = y[i] / 10 % 10;
        int b = y[i] / 10 / 10 % 10;
        int k = y[i] / 10 / 10 / 10;
        if (k == s && g == b + 1) res++;
    }

    cout << res << endl;

    return 0;
}