// Problem: C. Unstable String
// Contest: Codeforces - Educational Codeforces Round 110 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1535/C
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
		string a;
		cin>>a;
        int n=a.size();
        if(count(all(a),'?')==n)
        {
            cout<<n*(n+1)/2;
            cout<<endl;
            continue;
        }
		int ans=0;
		pair<int,int> stor;
		int flag=0;
        
		int start=0;
		int l=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]!='?' and flag==0) 
			{
				stor={a[i]-48,i%2};
				flag=1;
			}
			else if( (flag==1 and ((i%2==stor.S and 1-stor.F==(a[i]-48)) or (i%2!=stor.S and stor.F==(a[i]-48)) ) ) or i==n-1)
			{
				int t;
				if(i==n-1) start--;
				t=i-start;
				ans+=t*(t+1)/2+t*l;
				l=0;
                while(a[i-l-1]=='?') 
				{
					l++;
				}
				flag=0;
				start=i;
				if(i!=n-1) i--;
			}
		}
		cout<<ans<<endl;
    }
}