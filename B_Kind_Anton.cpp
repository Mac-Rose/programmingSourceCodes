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
        vi a(n),b(n);
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            a[i]=g;
        }
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            b[i]=g;
        }
        if(a[0]!=b[0]) 
        {cout<<"NO\n";continue;}
        
        int flag=0;
        auto it=a.end()-1;
        for(int i=n-1;i>0;i--,it--)
        {
            if(b[i]>a[i]) 
            { 
                if(find(a.begin(),it,1)==it) 
                {
                    cout<<"NO\n";
                    flag=1;
                    break;
                }
            }
            else if(b[i]<a[i]) 
            {
                if(find(a.begin(),it,-1)==it) 
                {
                    cout<<"NO\n";
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)cout<<"YES\n";
    }
}