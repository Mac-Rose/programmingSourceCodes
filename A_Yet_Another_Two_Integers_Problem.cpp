#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        long long a,b;
        cin>>a>>b;
        long d=abs(a-b);
        if(a==b) cout<<0<<"\n";
        else if(d<=10) cout<<1<<"\n";
        else 
        {
            if(d%10==0)
            cout<<d/10<<"\n";
            else
            {
                cout<<(d/10)+1<<"\n";
            }
        }
    }
    return 0;
}