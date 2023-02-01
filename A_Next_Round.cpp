#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,g;
    vector<int> v;
    auto count=0;
    cin>>s>>g;
    for(int i=0;i<s;i++)
    {
        int h;
        cin>>h;
        v.push_back(h);

    }
    sort(v.begin(),v.end(),greater <int>());
    if(v[g-1]>=0)
    {
    for(int i=0;i<s;i++)
    {
        if(v[i]>=v[g-1] and v[i]>0) count++;
    }
    cout<<count;
    }
    else cout<<0;
    return 0;
}