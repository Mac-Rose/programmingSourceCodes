#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second

bool prime(int n)
{
    bool ans=false;
    for(int i=sqrt(n);i*i>=n;i++)
    {
        if(i*i==n) ans=true;
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        if(n&1) 
        {
            cout<<"NO\n";
            continue;
        }
        else if(prime(n/2)) cout<<"YES\n";
        else if((n%4==0) and prime(n/4)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}