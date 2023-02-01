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
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        vi a(n+2,0);
        int curr=0;
        for(int i=1;i<=n;i++)
        {
            int it;
            cin>>it;
            if(i==1) curr+=it;
            else curr+=abs(it-a[i-1]);
            a[i]+=it;
        }
        curr+=a[n];
        for(int i=1;i<=n;i++)
        {
            if(a[i+1]<a[i] and a[i]>a[i-1]) curr-=1*(a[i]-max(a[i-1],a[i+1]));
        }
        cout<<curr<<endl;
    }
}