// Problem: B. The Great Hero
// Contest: Codeforces - Codeforces Round #700 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1480/B
// Memory Limit: 512 MB
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
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
		int a,b,n;
		cin>>a>>b>>n;
		vi ai(n);
		vi bi(n);
		for(auto &it:ai)
		{
			cin>>it;
		}
		for(auto &it:bi)
		{
			cin>>it;
		}
		int flag=0;
		for(int i=0;i<n;i++)
		{
			if(b-ai[i]<1)
			{
				if(bi[i]-a<=0 and i==n-1) break;
				cout<<"NO\n";
				flag=1;
				break;
			}
			else 
			{
				if(bi[i]-a>0)
				{
					while(bi[i]>0 and b>0)
					{
						b-=ai[i];
						bi[i]-=a;
						if(b<1) 
						{
							if(i==n-1 and bi[i]<1) break;
							cout<<"NO\n";
							flag=1;
							break;
						}
					}
				}
				else
				{
					bi[i]=0;
					b-=ai[i];
				}
			}
		}
		if(flag==1) continue;
		else cout<<"YES\n";
    }
}