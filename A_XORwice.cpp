// Problem: A. XORwice
// Contest: Codeforces - Codeforces Round #676 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1421/A
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

string dos (int n)
{
	string a;
	for(int i=0;i<ceil(log2(n)+1);i++)
	{
		int k= n>>i;
		if(k&1) a+='1';
		else a+='0';
	}
	reverse(a.begin(),a.end());
	return a;
}
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
    while(tst--)
    {
		int n,m;
		cin>>n>>m;
		string a=dos(n);
		string b=dos(m);
        if(b.size()>a.size())
        {
            reverse(all(a));
            for(int i=0;i<a.size()-b.size();i++) a+='0';
            reverse(all(a));
        }
        else if(a.size()>b.size())
        {
            reverse(all(b));
            for(int i=0;i<b.size()-a.size();i++) b+='0';
            reverse(all(b));
        }
		vi ans;
		for(int i=0;i<max(a.size(),b.size());i++)
		{
			if(a[i]==b[i]) ans.pb(a[i]-48);
			else ans.pb(0);
		}
		reverse(all(ans));
		int ans2=0;
		for(int i=0;i<ans.size();i++)
		{
			ans2+=ans[i]*(1<<i);
		}
		
		cout<<(n^ans2)+(m^ans2);
		cout<<endl;
    }
}