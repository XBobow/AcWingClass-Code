#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int f[46];

int main() {
    int n;
    cin >> n;
    f[1] = 1;
    for (int i = 2; i < n; i++) f[i] = f[i - 1] + f[i - 2];
    for (int i = 0; i < n; i++) cout << f[i] << " ";

    return 0;
}