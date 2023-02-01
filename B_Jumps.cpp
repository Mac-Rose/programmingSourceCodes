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
    vi v(1415);
    for(int i=1;i<=1415;i++)
    {
        v[i-1]=i*(i+1)/2;
    }
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        auto it=lower_bound(all(v),n);
        if(*it-n!=1) cout<<it-v.begin()+1;
        else cout<<it-v.begin()+2;
        cout<<endl;
    } 
}