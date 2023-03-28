#include <bits/stdc++.h>
#include <string>
#include <cstdio>
//#include <iostream>
using namespace std;

const int N = 1e5 + 10;

int n, m, size;
int heap[N], hp[N], ph[N];

//ph指向第k个插入的数在堆的哪个位置，ph指向堆某个位置的数是第几个插入的

void swap_heap(int t, int k) {
    swap(heap[t], heap[k]);
    swap(hp[t], hp[k]);
    swap(ph[t], ph[k]);
}

void down(int k) {
    int t = k;
    if (n >= 2 * k && heap[k] > heap[2 * k]) t = 2 * k;
    if (n >= 2 * k + 1 && heap[k] > heap[2 * k + 1]) t = 2 * k + 1;
    if (t != k) {
        swap_heap(heap[t], heap[k]);
        down(t);
    }
}

void up(int k) {
    while (k / 2)
        if (heap[k / 2] > heap[k]) {
            swap_heap(heap[k / 2], heap[k]);
            k = k / 2;
        }
}

void insert(int k, int x) {
    heap[++size] = x;
    hp[k] = size;
    ph[size] = k;
    up(size);
}


int main() {

    scanf("%d", &n);

    char op[2];
    int k, x;

    for (int i = 1; i <= n; i++) {
        scanf("%s", op);
        if (!strcmp(op, "I")) {
            scanf("%d", &x);
            insert(i, x);
        } else if (!strcmp(op, "PM")) {
            printf("%d", heap[1]);
        } else if (!strcmp(op, "DM")) {
            heap[1] = heap[size--];
            down(1);
        } else if (!strcmp(op, "DK")) {
            scanf("%d", &k);
            swap_heap(heap[hp[k]], heap[size--]);
            down(hp[k]);
            up(hp[k]);
        } else {
            scanf("%d%d", &k, &x);
            heap[hp[k]] = x;
            down(hp[k]);
            up(hp[k]);
        }
    }

    return 0;
}