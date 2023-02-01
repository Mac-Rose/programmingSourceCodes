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
        int ans=0;
        int e=0,o=0;
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            if(i&1)
            {
                if(g&1) o++;
                else 
                {
                    e++;
                    ans++;
                }
            }
            else
            {
                if(g&1)
                {
                    o++;
                    ans++;
                }
                else e++;
            }
        }
        if(n&1 and (e)!=o+1) cout<<-1<<endl;
        else if(n%2==0 and e!=o) cout<<-1<<endl;
        else cout<<ans/2<<endl;
    }
}