#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define MOD 1000000007
signed main()
{
	int x,y;
	cin>>x>>y;
	vector<long long> v;
	v.pb(x);
	v.pb(y);
	for(int i=2;i<6;i++)
	{
        if(i==5) v.insert(v.begin(),v[i-1]-v[i-2]);
		else v.pb(v[i-1]-v[i-2]);
	}
	long long n;
	cin>>n;
    n%=6;
	cout<<(v[n]+2*MOD)%MOD;
}