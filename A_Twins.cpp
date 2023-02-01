#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    vector<int> v;
    int su=0;
    while(tst--)
    {
        int n;
        cin>>n;
        su+=n;
        v.push_back(n);
    }
    sort(v.begin(),v.end(),greater<int>());
    int s=0;
    for(int i=0;i<v.size();i++)
    {
        s+=v[i];
        su-=v[i];
        if(s>su) 
        {cout<<i+1;break;}
    }
    return 0;
}