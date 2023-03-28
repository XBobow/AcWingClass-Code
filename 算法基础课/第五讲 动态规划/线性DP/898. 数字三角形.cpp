#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

const int N = 510;

int n;
int f[N][N];

int main() {

    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            cin >> f[i][j];

    for (int i = n; i > 0; i--)
        for (int j = 1; j <= i; j++)
            f[i][j] += max(f[i + 1][j], f[i + 1][j + 1]);

    cout << f[1][1] << endl;


    return 0;
}