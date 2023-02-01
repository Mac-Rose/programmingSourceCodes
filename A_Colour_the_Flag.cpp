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
        int n,m;
        cin>>n>>m;
        char ar[n][m];
        int flag1=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ar[i][j];
                if(ar[i][j]!='.') flag1=1;
            }
        }
        int pro=0;
        if(flag1==0)
        {
            cout<<"YES\n";
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if((i+j)%2==pro) cout<<"R";
                    else cout<<"W";
                }
                cout<<endl;
            }
            continue;
        }
        
        int flag=1;
        for(int i=0;i<n;i++)
        {
            if(flag==3) break;
            for(int j=0;j<m;j++)
            {
                if(ar[i][j]=='R' and flag==1)
                {
                    pro=(i+j)%2;
                    flag=2;
                }
                else if(ar[i][j]=='W' and flag==1)
                {
                    pro=(i+j)%2;
                    pro=1-pro;
                    flag=2;
                }
                else
                {
                    if(ar[i][j]=='R' and (i+j)%2!=pro) 
                    {
                        cout<<"NO";
                        cout<<endl;
                        flag=3;
                        break;
                    }
                    else if(ar[i][j]=='W' and (i+j)%2==pro)
                    {
                        cout<<"NO";
                        cout<<endl;
                        flag=3;
                        break;
                    }
                }
                
            }
        }
        if(flag!=3)
        {
            cout<<"YES\n";
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if((i+j)%2==pro) cout<<"R";
                    else cout<<"W";
                }
                cout<<endl;
            }
        }
    }
}