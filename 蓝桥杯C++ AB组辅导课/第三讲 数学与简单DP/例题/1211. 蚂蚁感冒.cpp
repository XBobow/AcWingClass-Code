#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

const int N = 55;

int n;
int ant[N];

int main() {

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ant[i];
    }

    int left = 0, right = 0;
    for (int i = 0; i < n; i++) {
        if (ant[i] > 0 && ant[i] < abs(ant[0])) right++;
        else if (ant[i] < 0 && abs(ant[i]) > abs(ant[0])) left++;
    }

    if ((ant[0] > 0 && !left) || (ant[0] < 0 && !right)) cout << 1 << endl;
    else cout << left + right + 1 << endl;

    return 0;
}