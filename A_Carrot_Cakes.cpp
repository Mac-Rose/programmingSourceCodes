#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace
#define mp make_pair
#define F first
#define int long long
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int t1,t2;
    t1=t*(ceil((n*1.0)/k));
    int i=1;
    int count=0;
    while(count<n)
    {
        if(i%t==0) count+=k;
        if((i-d)%t==0 and (i-d)>0) count+=k;
        i++;
    }
    t2=i-1;
    if(t1>t2) cout<<"YES";
    else cout<<"NO";
}