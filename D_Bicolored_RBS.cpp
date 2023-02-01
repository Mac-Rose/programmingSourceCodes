// Problem: D. Bicolored RBS
// Contest: Codeforces - Educational Codeforces Round 65 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1167/D
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
    int n;
    cin>>n;
    string a;
    cin>>a;
    int temp,ma;
    ma=LLONG_MIN;
    temp=0;
    vi v;
    for(int i=0;i<n;i++)
    {
    	if(a[i]=='(' ) temp++;
    	else temp--;
    	if(temp>ma)
    	{
            ma=temp;
    	}
    	if (temp==0) 
    	{
            v.pb(ma);
    		ma=0;
    	}
    	
    }
    temp=0;
    int j=0;
    for(int i=0;i<n;i++)
    {
    	if(temp==0)
    	{
    		ma=v[j];
            j++;
    	}
    	{
            if(a[i]=='(' ) temp++;

    		if(temp<=ma/2) cout<<1;
    		else cout<<0;
            if(a[i]==')' ) temp--;
    	}
    }
}