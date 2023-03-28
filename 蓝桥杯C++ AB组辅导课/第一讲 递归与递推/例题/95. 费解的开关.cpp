#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

const int N = 6;

int n;
char g[N][N], backup[N][N];
int dx[] = {0, 0, 0, -1, 1}, dy[] = {-1, 0, 1, 0, 0};

bool is_success() {
    for (int i = 0; i < 5; i++)
        if (g[4][i] == '0')
            return false;
    return true;
}

void turn(int x, int y) {
    for (int i = 0; i < 5; i++) {
        int a = x + dx[i], b = y + dy[i];
        if (a >= 0 && a < 5 && b >= 0 && b < 5)
            g[a][b] ^= 1;
    }
}

int main() {
    cin >> n;
    while (n--) {
        for (int i = 0; i < 5; i++) cin >> g[i];

        int res = 10;
        //枚举第一行多有可能的操作
        for (int op = 0; op < 32; op++) {
            memcpy(backup, g, sizeof g);
            int step = 0;
            for (int i = 0; i < 5; i++)
                if (op >> i & 1) {
                    step++;
                    turn(0, i);
                }

            for (int i = 0; i < 4; i++)
                for (int j = 0; j < 5; j++) {
                    if (g[i][j] == '0') {
                        step++;
                        turn(i + 1, j);
                    }
                }

            if (is_success()) res = min(res, step);

            memcpy(g, backup, sizeof g);

        }

        if (res > 6) res = -1;
        cout << res << endl;
    }
    return 0;
}