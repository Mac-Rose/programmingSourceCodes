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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        int s=0;
        vi v(n);
        for(auto &it:v)
        {
            cin>>it;
            s+=it;
        }
        if(s%n!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        int re=s/n;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>re) ans++;
        }
        cout<<ans<<endl;
    }
}