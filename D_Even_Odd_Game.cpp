// Problem: D. Even-Odd Game
// Contest: Codeforces - Codeforces Round #693 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1472/D
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
    int tst;
    cin>>tst;
    while(tst--)
    {
		int n;
		vi e,o;
		cin>>n;
		int se=0,so=0;
		for(int i=0;i<n;i++)
		{
			int g;
			cin>>g;
			if(g&1) o.pb(g);
			else e.pb(g);
		}
		sort(all(e),greater<int>());
		sort(all(o),greater<int>());
        int k=0,g=0;
        if(o.size()==0)
        {
            for(int j=k;j<e.size();j+=2)
						{
							se+=e[j];
						}
            if(so>se) cout<<"Bob";
		else if(se>so) cout<<"Alice";
		else cout<<"Tie";
		cout<<endl;
            continue;        
        }
		if(e.size()==0)
        {
            for(int j=g+1;j<o.size();j+=2)
						{
							so+=o[j];
						}
            if(so>se) cout<<"Bob";
		else if(se>so) cout<<"Alice";
		else cout<<"Tie";
		cout<<endl;
            continue;
        }
		int i=0;
		while(i<n)
		{
			if(i%2==0)
			{
				if(e[k]>o[g])
				{
					se+=e[k];
					k++;
					if(k==e.size()) 
					{
						for(int j=g;j<o.size();j+=2)
						{
							so+=o[j];
						}
						break;
					}
				}
                else 
                {
                    g++;
                    if(g==o.size()) 
					{
						for(int j=k+1;j<e.size();j+=2)
						{
							se+=e[j];
						}
						break;
					}
                }
			}
			else
			{
				if(o[g]>e[k])
				{
					so+=o[g];
					g++;
					if(g==o.size()) 
					{
						for(int j=k;j<e.size();j+=2)
						{
							se+=e[j];
						}
						break;
					}
				}
                else 
                {
                    k++;
					if(k==e.size()) 
					{
						for(int j=g+1;j<o.size();j+=2)
						{
							so+=o[j];
						}
						break;
					}
                }
			}
			i++;
		}
		if(so>se) cout<<"Bob";
		else if(se>so) cout<<"Alice";
		else cout<<"Tie";
		cout<<endl;
    }
}