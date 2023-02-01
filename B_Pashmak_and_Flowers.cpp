// Problem: B. Array Reodering
// Contest: Codeforces - Educational Codeforces Round 110 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1535/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)
#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        int a[n];
        vector<int> v;
        int c=0;
        int t=1;
        bool ans=true;
        for(int i=0;i<n;i++)
        {
        	cin>>a[i];
        	if(a[i]%2!=0)
        	{v.push_back(a[i]);ans=false;}
        	else 
        	{
        		c+=n-t;
        		t++;
        	}
        }
        if(ans)
        {
        	cout<<c<<endl;
        	continue;
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<v.size()-1;i++)
        {
        	for(int j=i+1;j<v.size();j++)
        	{
        		if(__gcd(v[i],2*v[j])>1)
        		c++;
        	}
        }
        cout<<c<<endl;
    }
    return 0 ;
} 
//////////////////////////////KharBooZi///////////////////////////////