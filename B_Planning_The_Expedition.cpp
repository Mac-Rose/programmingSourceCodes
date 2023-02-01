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
    int n,m;
    cin>>n>>m;
    vi v(101,0);
    for(int i=0;i<m;i++)
    {
        int it;
        cin>>it;
        v[it]++;
    }
    sort(all(v),greater<int>());
    int ans=1;
    
    while(true)
    {
        int temp=0;
        for(int i=0;v[i]!=0;i++) temp+=v[i]/ans;
        if(temp>=n) ans++;
        else break;
    }
    cout<<ans-1;
}