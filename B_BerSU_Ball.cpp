// Problem: B. BerSU Ball
// Contest: Codeforces - Codeforces Round #277.5 (Div. 2)
// URL: https://codeforces.com/problemset/problem/489/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define F first
//#define int long long
#define S second

/*****************************************
 * I had a couple of seed I made a forest*
 * ***************************************/
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    {
		int n,m;
		cin>>n;
		vi b(n);
		for(auto &it:b)
		{
			cin>>it;
		}
		cin>>m;
		vi g(m);
		for(auto &it:g)
		{
			cin>>it;
		}
		sort(b.begin(),b.end());
		sort(g.begin(),g.end());
		int ans=0;
		if(n>m)
		{
			auto curr=b.begin();
			for(int i=0;i<m;i++)
			{
				if(binary_search(curr,b.end(),g[i]-1)==true) 
				{
					ans++;
					curr=find(curr,b.end(),g[i]-1);
					curr++;
				}
				else if(binary_search(curr,b.end(),g[i])==true) 
				{
					ans++;
					curr=find(curr,b.end(),g[i]);
					curr++;
				}
				else if(binary_search(curr,b.end(),g[i]+1)==true) 
				{
					ans++;
					curr=find(curr,b.end(),g[i]+1);
					curr++;
				}
			}
		}
		else
		{
			auto curr=g.begin();
			for(int i=0;i<n;i++)
			{
				if(binary_search(curr,g.end(),b[i]-1)==true) 
				{
					ans++;
					curr=find(curr,g.end(),b[i]-1);
					curr++;
				}
				else if(binary_search(curr,g.end(),b[i])==true) 
				{
					ans++;
					curr=find(curr,g.end(),b[i]);
					curr++;
				}
				else if(binary_search(curr,g.end(),b[i]+1)==true) 
				{
					ans++;
					curr=find(curr,g.end(),b[i]+1);
					curr++;
				}
			}
		}
		cout<<ans;
    }
}