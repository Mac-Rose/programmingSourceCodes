#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int x,y;
        cin>>x>>y;
        if(x==y)
        cout<<2*min(x,y)+2*(max(x,y)-min(x,y))<<"\n";
        else 
        cout<<2*min(x,y)+2*(max(x,y)-min(x,y))-1<<"\n";
    }
    return 0;
}