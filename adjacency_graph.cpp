#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef pair<int,int> pii;


#define pb push_back
#define mp make_pair
#define F first
#define S second

void add_edge(vector<vector<int>> &h,int c,int i)
{
    h[i].pb(c);
    h[c-1].pb(i+1);
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<vector<int>> h(n);
    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin>>ws,s);
        int c;
        stringstream ss(s);
        while(ss>>c) add_edge(h,c,i);
    }
    int i=1;
    for(auto x:h)
    {
        cout<<i<<"-> ";
        for(auto y:x)
        cout<<y<<" ";
        cout<<"\n";
        i++;
    }
}