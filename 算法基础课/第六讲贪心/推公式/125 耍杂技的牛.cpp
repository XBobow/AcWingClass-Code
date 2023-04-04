#include<iostream>
#include<algorithm>

using namespace std;

const int N = 5e5+10;

int n;

struct Cow
{
    int w,s;

    bool operator<(const Cow &C)const
    {
        return (w+s)<(C.w+C.s);
    }

}cows[N];

int main()
{   
    scanf("%d",&n);

    int w,s;
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&w,&s);
        cows[i] = {w,s};
    }

    sort(cows+1,cows+n+1);

    for(int i=1;i<=n;i++) cows[i].w += cows[i-1].w;

    int res=-2e9;
    for(int i=1;i<=n;i++) res = max(res,cows[i-1].w-cows[i].s);

    printf("%d\n",res);

    return 0;
}