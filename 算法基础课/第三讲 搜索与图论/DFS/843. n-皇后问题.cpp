#include <cstdio>
#include <iostream>

using namespace std;

const int N = 10;

int n;

char g[N][N];
bool row[N],ng[N],gn[N];
void dfs(int u)
{
    if(u==n){
        for(int i =0;i<n;i++)
            puts(g[i]);
        puts("");
        return;
    }
    for(int i=0;i<n;i++){
        if(!row[i]&&!ng[u+i]&&!gn[u-i+n]){
            row[i] = true;
            ng[u+i] = true;
            gn[u-i+n] = true;
            g[u][i] = 'Q';
            dfs(u+1);
            row[i] = false;
            ng[u+i] = false;
            gn[u-i+n] = false;
            g[u][i] = '.';
        }
    }


}

int main()
{
    cin >> n;

    for(int i =0;i<n;i++)
        for(int j=0;j<n;j++)
            g[i][j] = '.';

    dfs(0);

    return 0;
}