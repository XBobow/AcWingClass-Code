#include <iostream>
#include <cstring>

using namespace std;

const int N = 1e5+10;

int n,ans=N;
int h[N],e[2*N],ne[2*N],idx;
bool st[N];

void add(int a,int b)
{
    e[idx]=b;
    ne[idx] = h[a];
    h[a] = idx++;
}

int dfs(int u)
{
    st[u] = true;

    int sum=0,size = 0;

    for(int i = h[u];i!=-1;i=ne[i]){
        int j= e[i];
        if(st[j]) continue;

        int s = dfs(j);
        size = max(size,s);
        sum +=s;
    }

    size=max(size,n-sum-1);
    ans = min(size,ans);

    return sum+1;
}

int main()
{
    cin >> n;

    memset(h, -1, sizeof h);

    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        add(a,b),add(b,a);
    }

    dfs(1);

    cout<<ans<<endl;

    return 0;
}