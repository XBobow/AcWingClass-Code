#include<iostream>

using namespace std;

long long n;

int main()
{   
    scanf("%lld",&n);

    while(n)
    {
        printf("%lld ",n);
        n/=2;
    }

    return 0;
}