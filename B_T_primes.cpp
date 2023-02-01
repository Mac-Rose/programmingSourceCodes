#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define F first
#define S second

int prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if((n%i)==0)
        {
            return 0;
        }
    }
    return 1;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        long long n;
        cin>>n;
        if(n==1) cout<<"NO\n";
        else
        cout<< ((ceil(sqrt(n))==sqrt(n) and prime(sqrt(n)))? "YES\n":"NO\n");
    }
}