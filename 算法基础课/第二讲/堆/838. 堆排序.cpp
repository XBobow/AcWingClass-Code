#include <bits/stdc++.h>
#include <cstdio>
//#include <iostream>
using namespace std;

const int N = 1e5 + 10;

int n, m;
int heap[N], cnt;

//堆得大小在变化，要用cnt
void down(int k) {
    int t = k;
    if (cnt >= 2 * k && heap[t] > heap[2 * k]) t = 2 * k;
    if (cnt >= 2 * k + 1 && heap[t] > heap[2 * k + 1]) t = 2 * k + 1;
    if (t != k) {
        swap(heap[t], heap[k]);
        down(t);
    }
}

int main() {

    scanf("%d%d", &n, &m);

    cnt = n;
    for (int i = 1; i <= n; i++) scanf("%d", &heap[i]);

    for (int i = n / 2; i; i--) down(i);

//    for (int i = 1; i <= n; i++) printf("%d", heap[i]);puts("");

    while (m--) //用最后一个节点替换根节点，down后根节点是原根节点的子节点中的最小值
    {
        printf("%d ", heap[1]);
        heap[1] = heap[cnt--];
        down(1);
//        for (int i = 1; i <= n; i++) printf("%d", heap[i]);puts("");
    }

    puts("");

    return 0;
}