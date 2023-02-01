#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        int c,d;
        c=max(a,b);
        d=min(a,b);
        int i;
        for(i=0;!(c>n||d>n);i++)
        {
            if(i%2==0)
            {
                d+=c;
            }
            else
            {
                c+=d;
            }   
        }
        cout<<i<<endl;
    }
    return 0;
}