#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(),(c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vi v(4);
    for(auto &it:v) cin>>it;
    sort(all(v));
    for(int i=0;i<2;i++)
    {
        if(v[i]+v[i+1]>v[i+2]) {cout<<"TRIANGLE";exit(0);}
    }
    for(int i=0;i<2;i++)
    {
        if(v[i]+v[i+1]==v[i+2]) {cout<<"SEGMENT";exit(0);}
    }
    cout<<"IMPOSSIBLE";
}