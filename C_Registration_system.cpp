#include<bits/stdc++.h>
using namespace std;

string s;

bool isEqual(map<string, int>& element)
    {
        return element->first ==  s;
    }

int exist(string s,vector<map<string,int>> v)
{
    int ans=-1;
    
    auto it = find_if( v.begin(), v.end(), isEqual );
    if(it!=v.end()) 
    {
        ans=it-v.begin();
    }
    return ans;
}

signed main()
{
    int tst;
    cin>>tst;
    vector<map<string,int>> v;
    while(tst--)
    {
        
        cin>>s;
        if(exist(s,v)!=-1) 
        {
            int i=exist(s,v);
            cout<<s<<v[i]->second<<"\n";
            v[i]->second++;
        }
        else
        {
            v.push_back({s,1});
            cout<<"OK\n";
        }
    }
}