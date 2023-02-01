#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        unsigned long long  x,y,k;
        cin>>x>>y>>k;
        unsigned long long ans =1;
        unsigned long long req=k*(y+1);
        ans+=k;
        if(x>=req) ;
        else ans+=((((req-x))-1)/(x-1))+1;
        cout<<ans<<endl;
    }
    return 0;
}