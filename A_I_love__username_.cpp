#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    tst-=1;
    int n;
    cin>>n;
    int y=0;
    int ma=n,mi=n;
    while(tst--)
    {
        int g;
        cin>>g;
        if(g>ma)
        {
            y++;
            ma=g;
        }
        if(g<mi)
        {
            y++;
            mi=g;
        }
    }
    cout<<y;
    return 0;
}