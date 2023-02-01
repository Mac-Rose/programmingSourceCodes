#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int c=0;
    char ar[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>ar[i][j];
            if(ar[i][j]=='#') c++;
        }
    }
    if(c==8) 
    {
        int flag=0;
        for(int i=0;i<3;i++)
        {
            if(flag==1) break;
            for(int j=0;j<3;j++)
            {
                int d=0;
                if(ar[i][j]==ar[i+1][j]) d++;
                
                if(ar[i][j]==ar[i+1][j+1]) d++;
                
                if(ar[i][j]==ar[i][j+1]) d++;
                
                    if(d>1)
                    {flag=1;
                    break;}
                    else continue;
                
            }
        }
        if (flag==0) cout<<"NO" ;
        else cout<<"YES";
    }
    else cout<<"YES";
    return 0;
}