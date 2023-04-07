#include <iostream>
#include <cstring>

using namespace std;

const int N = 6010;

int n;
int h[N], e[N], ne[N], idx;
int hp[N], f[N][2];
bool father[N];

void add(int a, int b) {
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
}

void dfs(int u) {
    f[u][1] = hp[u];

    for (int i = h[u]; i != -1; i = ne[i]) {
        int j = e[i];
        dfs(j);   //先dfs

        f[u][0] += max(f[j][0], f[j][1]);
        f[u][1] += f[j][0];
    }
}

int main() {

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) scanf("%d", &hp[i]);

    int a, b;
    memset(h, -1, sizeof h);
    for (int i = 1; i < n; i++) {
        scanf("%d%d", &a, &b);
        add(b, a);
        father[a] = true;
    }

    int root = 1;
    while (father[root]) root++;

    dfs(root);  //从根节点开始dfs

    printf("%d\n", max(f[root][0], f[root][1])); //root!!!

    return 0;
}