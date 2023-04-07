#include <iostream>

using namespace std;

int n;

int main() {

    cin >> n;

    int res = 0;
    for (int i = 1; i < n; i++) {
        int d = i * i;
        double h = n / 2.0;
        if (d % n < h) res++;
    }

    cout << res << endl;

    return 0;
}