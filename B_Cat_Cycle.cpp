#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,k;
        int count=0;
        cin>>n>>k;
        int t=k;
        //interactions
        if(n%2!=0)
        {
            int h=n/2;
            if((k%h)==0) t-=1;
            int f=t/h;
            count=f;
        }
        int g=(k+count)%n;
        if(g==0) g=n;
        cout<<g<<"\n";
    }
    return 0;
}