#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define F first
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        unsigned long long n,k,su;
        cin>>n>>k;
        su=(k*k);
        if(n%2 == k%2)
        {
            if(su>n) cout<<"NO";
            else cout<<"YES";
        }
        else cout<<"NO";
        cout<<endl;
    }
}