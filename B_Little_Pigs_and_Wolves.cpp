#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    char ar[n+2][m+2]={0};
    int count=0;
    for( int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>ar[i][j];
        }
    }
    for( int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(ar[i][j]=='P')
            {
                if(ar[i][j+1]=='W') 
                {
                    count++;
                    ar[i][j+1]='0';
                }
                else if(ar[i-1][j]=='W') 
                {
                    count++;
                    ar[i-1][j]='0';
                }
                else if(ar[i+1][j]=='W')
                {
                    count++;
                    ar[i+1][j]='0';
                }
                else if(ar[i][j-1]=='W') 
                {
                    count++;
                    ar[i][j-1]='0';
                }
                
            }
        }
    }
    cout<<count;
    return 0;
}