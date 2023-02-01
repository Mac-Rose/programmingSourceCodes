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
        if(n/4<(n*1.0)/4) cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            int k=1;
            vi v(n,0);
            for(int i=0;i<n/2;i++)
            {
                v[i]=k+1;
                v[(n/2)+i]=k;
                k+=2;
            }
            v.back()+=n/2;
            for(auto it:v)
            {
                cout<<it<<' ';
            }
            cout<<endl;
        }
        
    }
}