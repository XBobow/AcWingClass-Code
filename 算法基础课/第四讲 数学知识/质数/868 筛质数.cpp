#include<iostream>

using namespace std;

const int N = 1e6+10;

int n,cnt;
int primes[N];
bool st[N];

int main()
{   
    scanf("%d",&n);

    for(int i=2;i<=n;i++).              //i<=n!!!!!注意范围
    {
        if(!st[i]) primes[cnt++]=i;
        for(int j=0;primes[j]<=n/i;j++)
        {
            st[primes[j]*i] = true;
            if(i%primes[j]==0) break;
        }
    }

    printf("%d\n",cnt);

    return 0;
}