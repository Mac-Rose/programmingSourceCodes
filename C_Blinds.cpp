// Problem: C. Blinds
// Contest: Codeforces - School Personal Contest #1 (Winter Computer School 2010/11) - Codeforces Beta Round #38 (ACM-ICPC Rules)
// URL: https://codeforces.com/contest/38/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define F first
#define int long long
#define S second

/*********************************************************************
 * The master have failed more times than the student has ever tried.*
 *********************************************************************/
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;
    vi v(n);
    for(auto &it:v) cin>>it;
    sort(all(v));
    int ans=k,j=0,temp=0;
    while(true)
    {
    	j=0;
    	for(int i=0;i<n;i++)
    	{
    		j+=v[i]/ans;
    	}
    	if(j*ans<(ans-1)*temp or j==0) 
    	{
    		cout<<(ans-1)*temp;
    		exit(0);
    	}
    	else ans++;
        temp=j;
    }
}