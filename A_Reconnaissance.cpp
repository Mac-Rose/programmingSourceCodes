// Problem: A. Reconnaissance
// Contest: Codeforces - Codeforces Beta Round #32 (Div. 2, Codeforces format)
// URL: https://codeforces.com/problemset/problem/32/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
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
    int tst;
    tst=1;
    while(tst--)
    {
		int n,m;
		cin>>n>>m;
		vi v(n);
		for(auto &it:v) cin>>it;
        v.pb(LLONG_MAX);
		sort(all(v));
		int k=0,ans=0;
        while(k!=n-1)
        {
            for(int i=k+1;i<n+1;i++)
            {
                if(v[i]-v[k]>m ) 
                {
                    ans+=i-k-1;
                    break;
                }	
            }
            k++;
        }
		cout<<2*ans;
    }
}