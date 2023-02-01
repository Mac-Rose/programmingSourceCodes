// Problem: C. Design Tutorial: Make It Nondeterministic
// Contest: Codeforces - Codeforces Round #270
// URL: https://codeforces.com/problemset/problem/472/C
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
//#define int long long
#define S second

/*****************************************
 * I had a couple of seed I made a forest*
 *****************************************/
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<pair<string,int>> v;
    for(int i=0;i<n;i++)
    {
    	string f,s;
    	cin>>f>>s;
    	if(lexicographical_compare(all(f),all(s)))
    	{
    		v.pb(mp(f,(i+1)));
    	}
    	else
    	{
    		v.pb(mp(s,(i+1)));
    	}
    }
    vi giv;
    for(int i=0;i<n;i++)
    {
    	int c;
    	cin>>c;
    	giv.pb(c);
    }
    sort(all(v));
    vi ans;
    for(int i=0;i<n;i++)
    {
    	ans.pb(v[i].S);
    }
    if(ans==giv) cout<<"YES";
    else cout<<"NO";
}