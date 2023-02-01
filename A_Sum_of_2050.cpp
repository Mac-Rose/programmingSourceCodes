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
    while(tst--)
    {
        unsigned long long n;
        cin>>n;
        int count=0;
        if(n%2050!=0) 
        {
            cout<<-1<<"\n";
            continue;
        }
        else
        {
            unsigned long long re=n/2050;
            while(re>0)
            {
                count+=re%10;
                re/=10;
            }
        }
        cout<<count<<"\n";
    }
}