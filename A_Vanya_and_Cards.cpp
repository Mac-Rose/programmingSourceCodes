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
    int n,k;
    cin>>n>>k;
    int s=0;
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        s+=g;
    }
    if(s<0) s*=-1;
    else if(s==0) 
    {
        cout<<0;
        exit(0);
    }
    if(s%k==0) cout<<s/k;
    else cout<<(s/k)+1;
}