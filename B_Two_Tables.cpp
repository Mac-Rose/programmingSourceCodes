// Problem: B. Two Tables
// Contest: Codeforces - Educational Codeforces Round 112 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1555/problem/B
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

double max(double a, double b)
{
    if(a>b) return a;
    else return b;
}
/*********************************************************************
 * The master have failed more times than the student has ever tried.*
 *********************************************************************/

double corans(int w,int h,int x1,int y1,int x2,int y2,int w1,int h1)
{
		double ans=0;
		if((x2-x1)+w1>w&&(y2-y1)+h1>h) ans=-1;
		else
		{
			double dx=max(0,min(w1-x1,x2-(w-w1)));
			double dy=max(0,min(h1-y1,y2-(h-h1)));
			if((x2-x1)+w1>w) ans=dy;
			else if((y2-y1)+h1>h) ans=dx;
			else ans=min(dx,dy);
		}      
    return ans;
}


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    srand(time(NULL));
    tst=10000;
    while(tst--)
    {
		int n,m;
		n=rand()%10+1;
        m=rand()%10+1;
		
		int x1,y1,x2,y2;
		x1=rand()%(n+1);
        x2=x1 + rand() % ( n - x1 +1);
        y1= rand()%(m+1);
        y2=y1+rand()% (m- y1+1);
        if(x1==x2 or y1==y2) continue;
		int w,d;
		w= rand()%n+1;
        d=rand()%m+1;
		int w1=abs(x2-x1);
		int d1=abs(y2-y1);
        int ans;
		if(w1*d1+w*d>n*m) ans=-1;
		else if(w1+w>n and d1+d>m) ans=-1;
		else if(w<=x1 or x2+w<=n) ans=0;
		else if(d<=y1 or y2+d<=m) ans=0;
        else if(w1+w<=n and d+d1<=m) ans=min(min( d-y1,d-(m-y2)), min(w-x1,w-(n-x2)) );
		else if(w+w1>n) ans=min(d-y1,d-(m-y2));	
		else ans=min(w-x1,w-(n-x2));
		if(corans(n,m,x1,y1,x2,y2,w,d)!=ans)
        {
            cout<<n<<" "<<m<<endl;
            cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" "<<endl;
            cout<<w<<" "<<d<<endl;
            cout<<corans(n,m,x1,x2,y1,y2,w,d)<<" "<<ans;
            break;
        }
    }
}