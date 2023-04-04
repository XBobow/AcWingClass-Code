#include<iostream>

using namespace std;

int n;

void get_v(int x)
{
    for(int i=2;i<=x/i;i++)
    {
        if(x%i==0)
        {
            int s=0;
            while(x%i==0) x/=i,s++; //x/=i
            printf("%d %d\n",i,s);
        }
    }
    if(x>1) printf("%d 1\n",x); //x>1
    puts("");
}

int main()
{

    scanf("%d",&n);

    while(n--)
    {
        int x;
        scanf("%d",&x);
        get_v(x);
    }

    return 0;
}