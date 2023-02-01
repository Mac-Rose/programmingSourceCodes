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
    int n,q;
    cin>>n>>q;
    vi v(n);
    for(auto &it:v) cin>>it;
    sort(all(v));
    for(int i=0;i<q;i++)
    {
        int g;
        cin>>g;
        int h;
        if(binary_search(all(v),g)==false)
        {
            h=lower_bound(all(v),g)-v.begin();
            h=n-h;
        }
        else
        {
            cout<<0<<"\n";
            continue;
        }
        (h&1)? cout<<"NEGATIVE" : cout<<"POSITIVE";
        cout<<endl;
    }
    
}