#include<iostream>
#include<queue>

using namespace std;

int n;

int main()
{   
    scanf("%d",&n);

    int x;
    priority_queue<int,vector<int>,greater<int>> heap;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        heap.push(x);
    }

    int res=0;
    while(!heap.size()>1)
    {
        int a = heap.top(); heap.pop();
        int b = heap.top(); heap.pop();
        res += a+b;
        heap.push(a+b);
    }

    printf("%d\n",res);

    return 0;
}