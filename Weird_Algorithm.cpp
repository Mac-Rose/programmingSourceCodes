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
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n>1)
    {
        if(n&1) n=(n*3)+1;
        else n/=2;
        cout<<n<<" ";
    }
}