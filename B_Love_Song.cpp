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
    string a;
    cin>>a;
    map<int,int> m;
    int temp=0;
        for(int j=0;j<n;j++)
        {
            temp+=a[j]-96;
            m[j]=temp;
        }
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin>>l>>r;
        
        int ans=0;
        ans+=m[r-1]-m[l-2];
        cout<<ans<<endl;
    }
}