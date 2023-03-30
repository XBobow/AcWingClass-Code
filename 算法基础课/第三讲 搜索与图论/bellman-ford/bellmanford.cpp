#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

const int N = 510,M = 1010;

int n,m,k;
int dist[N],last[N];

struct Edge
{
    int a,b,c;
}edges[M];

void bellman_ford()
{
    memset(dist,0x3f,sizeof dist);
    dist[1] = 0;

    for(int i=0;i<k;i++)
    {
        memcpy(last,dist,sizeof dist);

        for(int j=0;j<m;j++)
        {
            auto e = edges[j];
            dist[e.b] = min(dist[e.b],last[e.a]+e.c);
        }
    }
}

int main()
{

    scanf("%d%d%d",&n,&m,&k);

    for(int i=0;i<m;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        edges[i] = {a,b,c};
    }

    bellman_ford();

    if(dist[n]>0x3f3f3f3f/2) puts("impossible");
    else printf("%d\n",dist[n]);

    return 0;
}