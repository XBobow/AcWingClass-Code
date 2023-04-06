#include<iostream>

using namespace std;

const int N = 10010;

int n,m;
int p[N],t[N];

int find(int x)
{
    if(p[x]!=x) p[x]=find(p[x]);
    return p[x];
}

int main()
{   
    scanf("%d%d",&n,&m);

    for(int i=1;i<=n;i++) p[i] = i;//初始化

    while(m--)
    {
        int c,a,b;
        scanf("%d%d%d",&c,&a,&b);
        if(c==1)
        {
            if(find(a)!=find(b))
                p[b] = a;
        }else
        {
            for(int i=1;i<=n;i++)
                if(find(i)==find(a))
                    t[i] += b;
        }
    }

    for(int i=1;i<=n;i++)
        printf("%d ",t[i]);

    return 0;
}