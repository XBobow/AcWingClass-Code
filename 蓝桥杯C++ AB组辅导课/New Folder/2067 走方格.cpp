#include<iostream>

using namespace std;

const int N = 35;

int n,m;
int f[N][N];

int main()
{
    scanf("%d%d",&n,&m);

    if(n%2==0&&m%2==0)
    {
        printf("0\n");
        return 0;
    }

    f[1][1] = 1;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {   
            if(i==1&&j==1) continue;
            if(i%2==0&&j%2==0) continue;
            else   f[i][j] = f[i-1][j]+f[i][j-1];
        }
    
    printf("%d\n",f[n][m]);

    return 0;
}