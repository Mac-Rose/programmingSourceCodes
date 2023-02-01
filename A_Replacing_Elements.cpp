#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,d,v[101];
        int flag=0;
        cin>>n>>d;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]>d) flag=1;
        }
        sort(v,v+n);
        if (flag==1)
        {if(v[0]+v[1]>d) cout<<"NO\n";
        else cout<<"YES\n";}
        else cout<<"YES\n";
    }
    return 0;
}