// Problem: A. Game of Life
// Contest: Codeforces - Deltix Round, Spring 2021 (open for everyone, rated, Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/1523/problem/A
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
		string a;
		a='0';
		string c;
		cin>>c;
		a+=c;
		a+='0';
		for(int j=0;j<m;j++)	
			for(int i=1;i<=n;i++)
			{
				if(a[i]=='0')
				{
					if(a[i+1]=='1' and a[i-1]=='0') a[i]='1';
					else if(a[i+1]=='0' and a[i-1]=='1') a[i]='1';
				}
			}
		cout<<a.substr(1,n)<<"\n";
    }
}