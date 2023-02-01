#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    tst=2*tst;
    long long  ans=0;
    long long count=0;
    map <long long,int>m;
    while(tst--)
    {
        long long n;
        cin>>n;
        if(m[n]==1) 
        {
            count--;
        } 
        else
        {
            m[n]=1;
            count++;
            ans=max(ans,count);
        }
    }
    cout<<ans;
}