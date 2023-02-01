#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second


int decimal_to_string (int n,vi &v)
{
	int a=0;
	for(int i=0;i<ceil(log2(n)+1);i++)
	{
		int k= n>>i;
		if(k&1) a+=v[i];
	}
	return a;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vi v;
    v.pb(a);
    v.pb(b);
    v.pb(c);
    v.pb(d);
    int s=a+b+c+d;
    if(s&1)
    {
        cout<<"NO";
        exit(0);
    }
    for(int i=1;i<=15;i++)
    {
        int re=decimal_to_string(i,v);
        if(re==s/2) 
        {
            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
}