// Problem: C. AquaMoon and Strange Sort
// Contest: Codeforces - Codeforces Round #732 (Div. 2)
// URL: https://codeforces.com/contest/1546/problem/C
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
multimap<int,int>::iterator creat(multimap<int,int>:: iterator it, int k)
{
	if(k==1)
    {
        it++;
    }
    else
    {
        it--;
    }
    return it;
}

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
		vi v(n);
		for(auto &it:v) cin>>it;
		multimap<int,int> m;
		for(int i=0;i<n;i++)
		{
			m.insert({v[i],i});
		}
		string ans="YES\n";
		int k=0;
		int temp=0;
		int ch=0,h=0;
		for(auto it=m.begin();it!=m.end();it++,k++)
		{
			if(k!=0 and creat(it,-1)->F==it->F )
			{
				if(k&1) ch++;
				if(it->S &1) h++;
			}
			else  
			{
				if(ch!=h)
				{
					ans="NO\n";
					break;
				}
                ch=0,h=0;
				temp=abs(k-(it->S));
				if(k&1) ch++;
				if(it->S &1) h++;
                if(temp&1 and creat(it,1)->F!=it->F)
				{
					ans="NO\n";
					break;
				}
			}
		}
		cout<<ans;
    }
}