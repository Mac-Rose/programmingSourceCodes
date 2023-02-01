#include<bits/stdc++.h>
using namespace std;

bool com(pair <int, int> v , pair <int,int> v1)
{
    if(v.first!=v1.first)
    return (v.first > v1.first);
    return v.second < v1.second;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    int g,d;
    cin>>n>>k;
    int rank=n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        cin>>g>>d;
        v.push_back(make_pair(g,d));
    }
    int ans=1;
    sort(v.begin(),v.end(),com);
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]==v[k-1]) 
        {
            for(;i>0;i--)
            {
                if(v[i]==v[i-1]) ans++;
                else break;
            }
            break;
        }
        
    }   
    cout<<ans;
    return 0;
}