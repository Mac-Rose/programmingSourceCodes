#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define F first
#define S second

#define ceil(n,k) (((n-1)/k)+1) 

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        int k;
        cin>>n>>k;
        int d;
        vi c(n,0);
        
        if(k==0)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
        }
        else if(k>ceil(n,2)-1) 
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            int count=0;
            for(int i=n-2,d=n;count!=k;i-=2,d--)
            {
                c[i]=d;
                count++;
            }
        }
        for(int i=0,u=1;i<n;i++)
        {
            if(c[i]==0)
            {
                c[i]=u;
                u++;
            }
        }
        for(auto it:c)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}