#include<iostream>

using namespace std;

int n;

bool isPrime(int x)
{   
    if(x<2) return false;//1需要特判
    for(int i=2;i<=x/i;i++)
    {
        if(x%i==0) return false;
    }
    return true;
}

int main()
{   
    scanf("%d",&n);

    while(n--)
    {
        int x;
        scanf("%d",&x);
        if(isPrime(x)) puts("Yes");
        else puts("No");
    }

    return 0;
}