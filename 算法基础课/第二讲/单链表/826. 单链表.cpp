#include <bits/stdc++.h>
#include <cstdio>
//#include <iostream>
using namespace std;

const int N = 100010;

int m, head = -1, idx = 0;
int e[N], ne[N];

void insert_head(int x) {
    e[idx] = x;
    ne[idx] = head;   //！！！！！！！！！！！！
    head = idx;
    idx++;
}

void del(int k) {
    ne[k] = ne[ne[k]];
}

void insert(int k, int x) {
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx;
    idx++;
}

int main() {

    scanf("%d", &m);

    while (m--) {
        char c;
        int k,x;

        scanf(" %c", &c);
        if (c == 'H') {
            scanf("%d", &x);
            insert_head(x);
        } else if (c == 'D') {
            scanf("%d", &k);
            if(!k) head = ne[head]; //11111111111111111111111
            else del(k-1);
        } else if (c == 'I') {
            scanf("%d%d", &k, &x);
            insert(k-1, x);
        }

    }

    for (int i = head; i != -1; i = ne[i]) printf("%d ", e[i]);

    return 0;
}

//https://blog.csdn.net/m0_74215326/article/details/128770930
//question.6