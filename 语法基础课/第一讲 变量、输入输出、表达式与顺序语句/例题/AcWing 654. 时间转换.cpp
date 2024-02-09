#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    int t, h, m, s;
    cin >> t;

    h = t / 3600;
    t %= 3600;
    m = t / 60;
    t %= 60;
    s = t;

    cout << h << ":" << m << ":" << s << endl;


    return 0;
}