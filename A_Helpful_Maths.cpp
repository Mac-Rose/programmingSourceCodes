#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    vector<int> v;
    for(int i=0;i<a.size();i+=2)
    {
        int g=a[i]-'0';
        v.push_back(g);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(i==v.size()-1) cout<<v[i];
        else cout<<v[i]<<"+";
    }
    return 0;
}