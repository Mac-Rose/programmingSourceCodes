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
    cin>>tst;
    while(tst--)
    {
        int n,m;
        cin>>n>>m;
        int ar[n][m];
        if(!(n&1) and m&1)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(i==0)
                    {
                        if(j&1) ar[i][j]=0;
                        else ar[i][j]=1;
                    }
                    else if(!(i&1)) 
                    {
                        if(j==0 or j==m-1) ar[i][j]=1;
                        else ar[i][j]=0;
                    }
                    else if(i==n-1)
                    {
                        if((j>1 and j<m-2) and !(j&1)) ar[i][j]=1;
                        else ar[i][j]=0;
                    }
                    else ar[i][j]=0;
                }
            }
        }
        else if(!(n&1) and !(m&1))
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if( i==0) 
                    {
                        if(j&1) ar[i][j]=0;
                        else ar[i][j]=1;
                    }
                    else if(i==n-1)
                    {
                        if(!(j&1) and j>1 and j<m-2) ar[i][j]=1;
                        else ar[i][j]=0;
                    }
                    else
                    {
                        if((j==m-1 or j==0) and !(i&1)) ar[i][j]=1;
                        else ar[i][j]=0;
                    }
                    
                }
            }
        }
        else
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 or i==n-1)
                {
                    if(!(j&1)) ar[i][j]=1;
                    else ar[i][j]=0;
                }
                else if(!(i&1) and (j==0 or j==m-1) and n&1) ar[i][j]=1;
                else ar[i][j]=0;
            }
        }
        for(int i=0;i<n;i++)
        {for(int j=0;j<m;j++) cout<<ar[i][j];
        cout<<endl;}
        cout<<endl;
    }
}