// Problem: B. Prinzessin der Verurteilung
// Contest: Codeforces - Codeforces Round #724 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1536/B
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

/*****************************
 * You can't a blood a stone.*
 *****************************/
void change(string &b)
{
	for(int i=b.size()-1;i>=-1;i--)
	{
		if(i==-1) 
		{
			b.insert(0,1,97);
			for(int j=1;j<b.size();j++) b[j]='a';
			break;
		}
		if(b[i]!='z') 
		{
			b[i]++;
			for(int j=i+1;j<b.size();j++) b[j]='a';
			break;
		}
	}
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
	vector<string> v;
	string b="a";
	while(b.size()<4)
	{
		v.pb(b);
		change(b);
	}
    cin>>tst;
    while(tst--)
    {
		int n;
		cin>>n;
		string a;
		cin>>a;
		int i=0;
		while(true)
		{
			b=v[i];
			if(a.find(b)==-1)
			{
				cout<<b<<endl;
				break;
			}
			i++;
		}
    }
}