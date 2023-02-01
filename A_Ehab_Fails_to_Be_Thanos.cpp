// Problem: B. A and B
// Contest: Codeforces - Educational Codeforces Round 78 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1278/B
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
    cin>>tst;
    set<int> s;
    for(int i=1;i<31;i++)
    {
    	s.emplace(i*(i+1)/2);
    }
    while(tst--)
    {
		int n,m;
		cin>>n>>m;
		int diff=abs(n-m);
		auto it=s.lower_bound(diff);
		for(;it!=s.end();it++)
		{
			if(!((*it-diff)&1))
			{
				cout<<distance(s.begin(),it)<<endl;
				break;
			}
		}
    }
}