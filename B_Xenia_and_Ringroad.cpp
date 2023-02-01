#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long n,t;
    cin>>n>>t;
    long long count=1;
    vector<long> v(t,0);
    for(int i=0;i<t;i++)
    {
        long g;
        cin>>g;
        v[i]=g;
    }
    auto it=unique(v.begin(),v.end());
    v.resize(distance(v.begin(),it));
    
    for(int i=1;i<v.size();i++)
    {
        if(v[i]<v[i-1]) count++;
    }

    cout<<n*(count-1)+v[v.size()-1]-1;
    return 0;
}