// Problem: B. Forgery
// Contest: Codeforces - Codeforces Round #514 (Div. 2)
// URL: https://codeforces.com/contest/1059/problem/B
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
    int n,m;
    cin>>n>>m;
    vector<vector<char>> v(n,vector<char> (m,' '));
    for(auto &it:v)
    {
    	for(char &i:it) cin>>i;
    }
    vector<vector<char>> g(n,vector<char> (m,'.'));
    for(int i=1;i<n-1;i++)
    {
    	for(int j=1;j<m-1;j++) 
    	{
    			if(v[i+1][j+1]=='#' and v[i+1][j]=='#' and v[i][j+1]=='#' and v[i-1][j]=='#' and v[i][j-1]=='#' and v[i-1][j-1]=='#' and v[i-1][j+1]=='#' and v[i+1][j-1]=='#')
				{
					g[i][j+1]='#';
					g[i+1][j]='#';
					g[i+1][j+1]='#';
					g[i-1][j+1]='#';
					g[i-1][j-1]='#';
					g[i+1][j-1]='#';
					g[i-1][j]='#';
					g[i][j-1]='#';
				}
    	}
    }
	
    if(v!=g)
    {
    	cout<<"NO";
    	exit(0);
    }
    cout<<"YES\n";
}