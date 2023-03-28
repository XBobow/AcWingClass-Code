#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

typedef pair<int, int> PII;

const int N = 4;
int change[N][N];

int get(int x, int y) {
    return 4 * x + y;
}

int main() {

    int state = 0;
    for (int i = 0; i < 4; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < 4; j++) {
            if (line[j] == '+')
                state += 1 << get(i, j);
        }
    }

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                change[i][j] += 1 << get(i, k);
                change[i][j] += 1 << get(k, j);
            }
            change[i][j] -= 1 << get(i, j);
        }

    vector<PII> res;
    for (int i = 0; i < 1 << 16; i++) {
        int now = state;
        vector<PII> path;
        for (int j = 0; j < 16; j++) {
            if (i >> j & 1) {
                int x = j / 4, y = j % 4;
                now ^= change[x][y];
                path.push_back({x, y});
            }
        }

        if (!now && (res.empty() || res.size() > path.size())) res = path;
    }

    cout << res.size() << endl;
    for (auto p: res) cout << p.first + 1 << ' ' << p.second + 1 << endl;

    return 0;
}