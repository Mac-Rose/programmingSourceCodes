#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n,0);
    
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        v[i]=g;
    }
    int N=*max_element(v.begin(),v.end());
    vector<pair<int,int> > b(2*N+1,make_pair(-1,-1));
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        if(flag==1) break;
        for(int j=i+1;j<n;j++)
        {
            if(b[v[i]+v[j]].first>-1 and (b[v[i]+v[j]].second!=j and (b[v[i]+v[j]].second!=i and b[v[i]+v[j]].first!=i))) 
            {
                cout<<"YES\n";
                cout<<i+1<<" "<<j+1<<" "<<b[v[i]+v[j]].first+1<<" "<<b[v[i]+v[j]].second+1;
                flag=1;
                break;
            }
            else
            b[v[i]+v[j]]=make_pair(i,j);
        }
    }
    if(flag==0) cout<<"NO";
    return 0;
}