#include<iostream>
#include<algorithm>

using namespace std;

const int N = 1e5+10;

int n;
int t[N];

int main()
{   
    scanf("%d",&n);

    for(int i=0;i<n;i++)    scanf("%d",&t[i]);
    
    sort(t,t+n);

    long long res = 0;
    for(int i=0;i<n;i++) res+=t[i]*(n-i-1);

    printf("%lld\n",res);

    return 0;
}