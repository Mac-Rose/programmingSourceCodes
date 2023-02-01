#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    long long ar[tst],k[tst+1]={0};
    int n=tst;
    
    int i =0;
    while(tst--)
    {
        cin>>ar[i];
        k[i+1]=ar[i]+k[i];
        i++;
    }
    vector<long long> v(ar,ar+n);
    sort(v.begin(),v.end());
    long long   j[n+1]={0};
    for(int i=0;i<v.size();i++)
    {
        j[i+1]=j[i]+v[i];   
    }
    int u;
    cin>>u;
    for(int i=0;i<u;i++)
    {
        int g,l,r;
        cin>>g;
        long long ans=0;
        if(g==1) 
        {
            cin>>l>>r;
            ans=k[r]-k[l-1];
            cout<<ans;
        }
        else
        {
            cin>>l>>r;
            ans=j[r]-j[l-1];
            cout<<ans;
        }
        cout<<endl;
    }
    return 0;
}