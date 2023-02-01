#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    while(k--)
    {
        int g;
        cin>>g;
        v.push_back(g);
    }
    sort(v.begin(),v.end());
    for(int i=1;i<n+1;i++)
    {
        if(!binary_search(v.begin(),v.end(),i)) cout<<i<<endl;
    }
}