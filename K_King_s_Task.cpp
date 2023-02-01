#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define F first
#define S second

void oper1(vi &a,int n)
{
    for(int i=0;i<a.size();i+=2)
    {
        swap(a[i],a[i+1]);
    }
}

void oper2(vi &c, int n)
{
    vi g(c.begin()+n ,c.end());
    for(auto it=c.begin();it!=c.begin()+n;it++)
    {
        g.pb(*it);
    }
    c=g;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> a,c;
    for(int i=0;i<2*n;i++)
    {
        int g;
        cin>>g;
        a.pb(g);
    }
    c=a;
    vi b(2*n);
    iota(b.begin(),b.end(),1);
    int i=0;
    while(!(a==b or i==n))
    {
        if(i&1) oper1(a,n);
        else oper2(a,n);
        i++;
    }
    int k=0;
    while(!(c==b or k==n))
    {
        if(!(k&1)) oper1(c,n);
        else oper2(c,n);
        k++;
    }
    if(a==b or c==b) cout<<min(i,k);
    else cout<<-1;
}