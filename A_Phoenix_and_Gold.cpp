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
        int n,m;
        cin>>n>>m;
        if(n==1) 
        {
            int g;
            cin>>g;
            if(g==m)
            cout<<"NO\n";
            else cout<<"YES\n"<<g<<endl;
            continue;
        }
        else 
        {
            vi v(n,0);
            int su=0;
            int flag=0;
            for(int i=0;i<n;i++)
            {
                int g;
                cin>>g;
                su+=g;
                v[i]=g;
                if(su==m) 
                {
                    if(i==n-1) 
                    {
                        flag=1;
                        cout<<"NO\n";
                        break;
                    }
                    cin>>g;
                    v[i+1]=g;
                    swap(v[i+1],v[i]);
                    i++;
                }
            }
            if(flag==1) continue;
            cout<<"YES\n";
            for(auto it:v)
            {
                cout<<it<<" ";
            }
            cout<<"\n";
        }
    }
}