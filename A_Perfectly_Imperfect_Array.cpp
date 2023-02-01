#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second

bool check(int g)
{
    if(sqrt(g)-ceil(sqrt(g))==0)
    return true ;
    else return false;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    
    while(tst--)
    {
        int flag=1;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            if(check (g)== false) 
            {
                flag=0;
            }
        }
        if(flag==1) cout<<"NO\n";
        else cout<<"YES\n";
        //cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
}