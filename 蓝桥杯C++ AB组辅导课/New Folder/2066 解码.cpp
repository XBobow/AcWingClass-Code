#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string str;
    cin >> str;

    for(int i=0;i+1<str.size();i++)
    {
        if((str[i+1]-'0')>=1&&(str[i+1]-'0'<=9))
        {
            int c = str[i+1] - '0';
            while(c--) printf("%c",str[i]);
            i++;
        }else printf("%c",str[i]);
    }

    if(!((str[str.size()-1]-'0')>=1&&(str[str.size()-1]-'0')<=9))
        printf("%c",str[str.size()-1]);

    return 0;
}