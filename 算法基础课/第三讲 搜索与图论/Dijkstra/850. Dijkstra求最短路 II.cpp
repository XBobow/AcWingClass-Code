#include <bits/stdc++.h>
#include <cstdio>
#include<cstring>
#include<queue>
//#include <iostream>
using namespace std;

typedef pair<int,int> PII;

const int N = 1e6+10;

int n,m;
int h[N],e[N],w[N],ne[N],idx;
int dist[N];
bool st[N];

void add(int x,int y,int z){
    e[idx] = y;
    w[idx] = z;
    ne[idx] = h[x];
    h[x] = idx++;
}

int dijkstra()
{
    memset(dist,0x3f,sizeof dist);
    dist[1] = 0;

    priority_queue<PII,vector<PII>,greater<PII>> heap;
    heap.push({0,1});

    while(heap.size()){
        auto t = heap.top();
        heap.pop();

        int ver = t.second,distance = t.first;
        if(st[ver]) continue;
        st[ver] = true;

        for(int i=h[ver];i!=-1;i=ne[i])
        {
            int j = e[i];
            if(dist[j]>dist[ver]+w[i])
            {
                dist[j] = dist[ver]+w[i];
                heap.push({dist[j],j});
            }
        }

        if(dist[n]==0x3f3f3f3f) return -1;
        return dist[n];
    }
}

int main() {

    scanf("%d%d",&n,&m);

    memset(h,-1,sizeof h);

    int x,y,z;
    for(int i = 0;i<m;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        add(x,y,z);
    }

    printf("%d",dijkstra());

    return 0;
}