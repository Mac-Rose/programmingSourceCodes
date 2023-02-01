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
        string a;
        cin>>a;
        vi b(n,0),v(n,0);
        v[0]=1,b[0]=1;
        int u=n;
        for(int i=1;i<n;i++)
        {
            if(a[i]=='1')
            {
                u=i;
                v[u]=1;
                b[u]=0;
                break;
            }
        }
        for(int i=1;i<u;i++)
        {
            if(a[i]=='0')
            {
                v[i]=0;
                b[i]=0;
            }
            if(a[i]=='2')
            {
                v[i]=1;
                b[i]=1;
            }
        }
        for(int i=u+1;i<n;i++)
        {
            if(a[i]=='0')
            {
                b[i]=0;
            }
            else if(a[i]=='2')
            {
                b[i]=2;
            }
            else b[i]=1;
        }
        for(auto it:v)
        {
            cout<<it;
        }
        cout<<endl;
        for(auto it:b)
        {
            cout<<it;
        }
        cout<<endl;
    }
}