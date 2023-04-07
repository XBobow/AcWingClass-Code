#include<iostream>

using namespace std;

const int N = 10010;

int n, m;
int p[N], t[N];

int find(int x) {
    if (p[x] == x || p[p[x]] == p[x]) return p[x];
    int r = find(p[x]);
    t[x] += t[p[x]];
    p[x] = r;
    return r;
}

int main() {
    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i++) p[i] = i;//初始化

    while (m--) {
        int c, a, b;
        scanf("%d%d%d", &c, &a, &b);
        if (c == 1) {
            a = find(a), b = find(b);
            if (a != b) {
                t[b] -= t[a];
                p[b] = a;
            }
        } else {
            a = find(a);
            t[a] += b;
        }
    }

    for (int i = 1; i <= n; i++)
        if (i == find(i)) printf("%d ", t[i]);
        else printf("%d ", t[i] + t[find(i)]);

    return 0;
}