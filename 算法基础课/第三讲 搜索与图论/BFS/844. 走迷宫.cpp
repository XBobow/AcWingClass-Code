#include <cstdio>
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

typedef pair<int,int> PII;

const int N = 110;

int n,m;
int a[N][N],d[N][N];

int bfs()
{
    queue<PII> q;

    //init!!!!!!
    memset(d,-1,sizeof d);
    d[1][1] = 0;
    int dx[4] = {0,0,-1,1},dy[4]={1,-1,0,0};
    q.push({1,1});

    while(q.size()){
        auto t=q.front();
        q.pop();

        for(int i=0;i<4;i++){
            int x=t.first+dx[i],y=t.second+dy[i];
            if(x>=1&&y>=1&&x<=n&&y<=m&&a[x][y]==0&&d[x][y]==-1)
            {
                q.push({x,y});
                d[x][y] = d[t.first][t.second]+1;
            }
        }

    }

    return d[n][m];

}

int main()
{
    cin >> n >> m;

    for(int i = 1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin >> a[i][j];

    cout<<bfs()<<endl;

    return 0;
}