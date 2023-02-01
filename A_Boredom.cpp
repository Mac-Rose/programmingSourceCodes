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
    int n;
    cin>>n;
    map <int, int> m;
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        m[g]++;
    }
    int dp[100001]={0};
    dp[1]=m[1];
    for(int i=2;i<100001;i++)
    {
        dp[i]=max(dp[i-1],m[i]*i+dp[i-2]);
    }
    cout<<dp[100000];
}