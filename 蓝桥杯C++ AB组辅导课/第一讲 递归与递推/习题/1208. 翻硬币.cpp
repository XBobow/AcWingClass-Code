#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

string a, b;

void turn(int i) {
    if (a[i] == '*') a[i] = 'o';
    else a[i] = '*';
}

int main() {
    cin >> a >> b;
    int res = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            res++;
            turn(i), turn(i + 1);
        }
    }

    cout << res << endl;

    return 0;
}