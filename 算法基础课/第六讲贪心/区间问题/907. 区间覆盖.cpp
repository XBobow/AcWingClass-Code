#include <iostream>
#include<algorithm>

using namespace std;

const int N = 1e5 + 10;

int st, ed, n;

struct Range {
    int l, r;

    bool operator<(const Range&R)const
    {
        return l<R.l;
    }

} range[N];

int main() {

    scanf("%d%d", &st, &ed);
    scanf("%d",&n);

    int l, r;
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &l, &r);
        range[i] = {l, r};
    }

    sort(range,range+n);

    int res=0;
    bool sc=false;
    for(int i=0,j;i<n;i=j)
    {
        j=i,r=-2e9;
        while(j<n&&range[j].l<=st){
            r = max(range[j].r,r);
            j++;
        }

        if(r<st)
        {
            res = -1;
            break;
        }

        res++;
        if(r>=ed)
        {
            sc = true;
            break;
        }

        st = r;      
    }

    if(!sc) res = -1;
    printf("%d\n",res);


    return 0;
}