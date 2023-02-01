#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,m[101],su=0,co2=0,co1=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>m[i];
            if(m[i]==2) co2++;
            else co1++;
            su+=m[i];
        }
        if(su%2!=0) cout<<"NO";
        else
        {
            if(co2%2!=0) 
            {
                if(co1>1) cout<<"YES";
                else cout<<"NO";
            }
            else cout<<"YES";
        }
        cout<<"\n";
    }
    return 0;
}