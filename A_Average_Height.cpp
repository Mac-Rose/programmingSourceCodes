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
        int n;
        cin>>n;
        vi v(n),b;
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            v[i]=g;
        }
        
        for(auto it:v)
        {
            if(it&1)
            cout<<it<<" ";
            else 
            {
                b.pb(it);
            }
        }
        for(auto it:b)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}