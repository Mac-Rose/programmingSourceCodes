// Problem: A. AquaMoon and Two Arrays
// Contest: Codeforces - Codeforces Round #732 (Div. 2)
// URL: https://codeforces.com/contest/1546/problem/A
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
    while(tst--)
    {
		int n;
		cin>>n;
		vi a(n),b(n);
		int sa=0,sb=0;
		for(auto &it:a) 
		{
			cin>>it;
			sa+=it;
		}
		for(auto &it:b) 
		{
			cin>>it;
			sb+=it;
		}
        vi ma,ml;
		if(sa!=sb)
		{
			cout<<"-1\n";
			continue;
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				if(a[i]>b[i])
				{
					for(int j=0;j<a[i]-b[i];j++)
					{
						ma.pb(i+1);
					}
				}
				else if(a[i]<b[i])
				{
					for(int j=0;j<b[i]-a[i];j++)
					{
						ml.pb(i+1);
					}
				}
			}
            cout<<ma.size()<<endl;
            for(int i=0;i<ma.size();i++)
            {
                cout<<ma[i]<<" "<<ml[i];
                cout<<endl;
            }
		}
    }
}