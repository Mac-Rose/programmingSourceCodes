#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long double ld;
const ld r = 10e+9;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(),(c).end()

void rev (string &b,string &a)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='M') b+='C';
        else b+='M';
    }
}
void trim(string &a)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='M') 
        {
            a.erase(0,1);
            i--;
        }
        else break;
    }
}
void convert(int n,vector<string> &v)
{
	string a,b;
	for(int i=0;i<ceil(log2(n)+1);i++)
	{
		int k= n>>i;
		if(k&1) a+='C';
		else a+='M';
	}
    reverse(all(a));
    trim(a);
    rev(b,a);
    a+='P';
    b+='P';
	v.pb(a);
    v.pb(b);
}
ld check(ld c,ld m,ld p,ld v,string a)
{
    ld ans=1;
    for(int i=0;i<a.size()-1;i++)
    {
        if(a[i]=='C' )
        {
            if(c-v>=0.000001)
            {
                ans*=c;
                c-=v;
                if(m>0.000001)
                {m+=v/2;
                p+=v/2;}
                else
                {
                    p+=v;
                }
            }
            else 
            {
                ans*=c;
                if(m!=0)
                {m+=c/2;
                p+=c/2;}
                else
                {
                    p+=c;
                }
                c=0;
            }
        }
        else
        {
            if(m-v>=0.000001)
            {
                ans*=m;
                m-=v;

                if(c>0.000001)
                {
                c+=v/2;
                p+=v/2;
                }                
                else p+=v;
            }
            else 
            {
                ans*=m;
                
                if(c!=0)
                {
                c+=m/2;
                p+=m/2;
                }               
                else p+=m;
                m=0;
            }
        }
        if(ans==0) break;
    }
    ans*=p;
    return ans;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    vector<string> vu;
    vu.pb("P");
    for(int i=1;i<pow(2,18)-1;i++)
    {
        convert(i,vu);
    }
    cin>>tst;
    while(tst--)
    {
        ld c,m,p,v,ans=0;
        cin>>c>>m>>p>>v;
        for(int i=0;i<vu.size();i++)
        {
            ans+=(vu[i].size()*1.000000*check(c,m,p,v,vu[i]));
        }
        cout<<setprecision(16)<<ans<<endl;
    }
}