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
    int n;
    cin>>n;
    vi v(n);
    string ans="YES";
    for(auto &it:v) cin>>it;
    int it=max_element(all(v))-v.begin();
    for(int i=it+1;i<n;i++)
    {
        if(v[i]>v[i-1]) 
        {
            ans="NO";
            break;
        }
    }
    for(int i=it-1;i>-1;i--)
    {
        if(v[i]>v[i+1]) 
        {
            ans="NO";
            break;
        }
    }
    cout<<ans;
}