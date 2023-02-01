#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
        int n,k;
        cin>>n>>k;
        set <int> s;
        s.emplace(0);
        for(int i=0;i<n;i++)
        {
            int h;
            cin>>h;
            s.emplace(h);
        }
        cout<<k-s.end();
    
}