// Problem: B. Zero Array
// Contest: Codeforces - Codeforces Round #577 (Div. 2)
// URL: https://codeforces.com/contest/1201/problem/B
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
    int n;
    int s=0;
    int ma=0;
    cin>>n;
	for(int i=0;i<n;i++)
	{
		int it;
		cin>>it;
        if(it>ma) ma=it;
		s+=it;
	}
	if(s&1) cout<<"NO"; 
    else
    {
        if(s-ma<ma) cout<<"NO";
        else cout<<"YES";
    }
}