#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef __int64 ull;
typedef vector<int> vi;
typedef pair<int,int> pii;

ull pow(ull x, ull y) {ull res=1 ; while(y>0) {if(y&1) {res*=x;} else {x/=2;}} return res;}
#define pb emplace_back
#define mp make_pair
#define F first
#define S second

bool comp(vi res,ll mi1,ll ma1)
{
    reverse(res.begin(),res.end());
    ull re=0;
    ull dec=1;
    for(int i=0;i<res.size();i++)
    {
        re+=res[i]*dec;
        dec*=10;
    }
    if(re>=mi1 and re<=ma1) return true;
    else return false;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll ma,d,mi,mi1,ma1;
    cin>>ma>>d;
    mi=ma-d;
    mi1=mi;
    ma1=ma;
    vector<int> a;
    while(ma>0)
    {
        a.pb(ma%10);
        ma/=10;
    }
    reverse(a.begin(),a.end());
    vector<int> b(a.size(),0);
    for(int i=a.size()-1;mi>0;i--)
    {
        b[i]=mi%10;
        mi/=10;
    }
    vi res(a.size(),9);
    for(int i=0;i<a.size();i++)
    {
        for(int j=9;j>=0;j--)
        {
            res[i]=j;
            if(comp(res,mi1,ma1)==true) 
            {
                auto it=res.begin();
                for(int k=0;k<res.size();k++)
                {
                    if(res[k]!=0)
                    {
                        it+=k;
                        break;
                    }
                }
                for(;it!=res.end();it++)
                {
                    cout<<*it;
                }
                exit(0);
            }
        }
        res[i]=a[i];
    }
}