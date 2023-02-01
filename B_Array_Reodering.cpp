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

bool prime(int n)
{
    bool res=true;
    if(n==2) return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            res=false;
            break;
        }
    }
    return res;
}
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
        vi v(n);
        //vi count(10e5+1,0);
        for(auto &it:v)
        {
            cin>>it;
            //count[it]++;
        }
        ll ans=0;
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<n-1;i++)
        {
                for(int j=i+1;j<n;j++)
                {
                    if(__gcd(v[i],2*v[j])>1) ans++;
                    else if(__gcd(2*v[i],v[j])>1) ans++;
                }
            
        }
        cout<<ans<<endl;
    }
}