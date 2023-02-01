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
        int n;
        cin>>n;
        int x,y;
        int count=0;
        cin>>x>>y;
        if(x==y)
        {
            int z;
            count=2;
            while(cin>>z) 
            {
                count++;
                if(z!=x) 
                {cout<<count<<"\n";
                break;}

            }
        }
        else
        {
            int z;
            cin>>z;
            if(x==z) cout<<2<<"\n";
            else cout<<1<<"\n";
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
}