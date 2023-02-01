#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        long long ar[n][2];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i][0];
            cin>>ar[i][1];
        }
        vector<long> v;
        
        for(int i=0;i<n;i++)
        {
            long g;
            cin>>g;
            v.push_back(g);
        }
        long long ans=0,a,b;
        
        for(int i=0;i<n;i++)
        {
            if(i==0) a=v[0]+ar[0][0];
            else a=b+v[i]+ar[i][0]-ar[i-1][1];
            
            ans=ceil(((ar[i][1]-ar[i][0])*1.0)/2);
            
            if(a+ans<=ar[i][1]) b=ar[i][1];
            else
            {
                b=a+ans;
            }
            
            if(i==n-1) cout<<a<<endl;
        }
    }
    return 0;
}