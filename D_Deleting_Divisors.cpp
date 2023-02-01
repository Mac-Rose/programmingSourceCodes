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

bool isPrime(ll n)
{
    if(n==2 or n==3) return true;
    if(n%2==0) return false;
    for(ll i=3; i*i<=n; i+=2) if(n%i==0) return false;
    return true;
}

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
        cin>>n;
        int g=0;
        while(n>0 and isPrime(n)==false)
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0) 
            {
                g+=i;
                n/=i;
                break;
            }
        }
        if(g&1 or g==0) cout<<"Bob";
        else cout<<"Alice";
        cout<<endl;
    }
}