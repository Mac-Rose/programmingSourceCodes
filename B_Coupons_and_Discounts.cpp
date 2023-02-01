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
    for(auto &it:v)
    {
        cin>>it;
    }   
    for(int i=0;i<n;i++)
    {
        if(v[i]&1 and i<n-1 and v[i+1]>0 )
        {
            v[i+1]--;
        }
        else if(v[i]&1)
        {
            cout<<"NO";
            exit(0);
        }
    }
    cout<<"YES";
}