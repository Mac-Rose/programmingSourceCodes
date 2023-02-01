#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(),(c).end()

ll lcm(int a,int b)
{
    return (a / __gcd(a, b)) * b ;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int N,D;
    if(d*(double)a/c>b)
    {
        N=c*b*b;
        D=d*a*b;
    }
    else
    {
        N=d*a*a;
        D=c*a*b;
    }
    
    int  x=__gcd(N,D);
    N/=x,D/=x;
    N=D-N;
    cout<<N<<"/"<<D;
}