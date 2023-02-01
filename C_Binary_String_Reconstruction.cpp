// Problem: C. Binary String Reconstruction
// Contest: Codeforces - Educational Codeforces Round 94 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1400/C
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
		int x;
		cin>>x;
        int n=a.size();
        vi v(n,1);
        for(int i=0;i<n;i++)
        {
            if(a[i]=='0') 
            {
                if(i-x>=0) v[i-x]=0;
                if(i+x<n ) v[i+x]=0;
            }
        }
    
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1')
            {
                int flag=0;
                if(i-x>-1 and v[i-x]==1)flag++;
                if(i+x<n and v[i+x]==1) flag++;
                if(!flag) 
                {
                    cout<<"-1\n";
                    f=1;
                    break;
                }
            }
            
        }
        if(f!=0)
        {
            
            continue;
        }
        for(auto it:v)cout<<it;
        cout<<endl;
    }
}