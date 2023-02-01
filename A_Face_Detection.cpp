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
#define all(c) (c).begin(),(c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    tst=1;
    while(tst--)
    {
        int n,m;
        cin>>n>>m;
        char ar[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ar[i][j];
            }
        }
        int ans=0;
        
        for(int i=0;i<=n-2;i++)
        {
            for(int j=0;j<=m-2;j++)
            {
                int temp=0;
                vector <char> v{'f','a','c','e'};


                if(find(all(v),ar[i][j])!=v.end()) 
                {
                    temp++;
                    v.erase(find(all(v),ar[i][j]));
                }
                else continue;
                if(find(all(v),ar[i+1][j])!=v.end()) 
                {
                    temp++;
                    v.erase( find( all(v),ar[i+1][j] ) );
                }
                else continue;
                if(find(all(v),ar[i][j+1])!=v.end()) 
                {
                    temp++;
                    v.erase(find(all(v),ar[i][j+1]));
                }
                else continue;
                if(find(all(v),ar[i+1][j+1])!=v.end()) 
                {
                    temp++;
                    v.erase(find(all(v),ar[i+1][j+1]));
                }
                else continue;
                
                if(v.size()==0 ) ans++;
            }
        }
        cout<<ans;
    }
}