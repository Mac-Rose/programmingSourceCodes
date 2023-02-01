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
    int n,s,x;
    cin>>n>>s>>x;
    if(x<n) 
    {
        cout<<"NO";
        exit(0);
    }
    else
    {
        if((x-n)%s==0 ) cout<<"YES";
        else if(x!=n+1 and  (x-n)%s==1) cout<<"YES";
        else cout<<"NO";
    }
    
}