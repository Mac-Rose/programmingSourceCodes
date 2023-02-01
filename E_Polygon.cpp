#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        int ar[n][n];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                char c;
                cin>>c;
                ar[i][j]=c-48;
            }
        }
        int flag1=0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if(ar[i][j]==1)
                {
                    if(i==n-1 or j==n-1);
                    else if((j+1<n and ar[i][j+1]==1 ) or (i+1<n and ar[i+1][j]==1));
                    else
                    {
                        flag1=1;
                        break;
                    }  
                }
            }
            if(flag1==1) break;
        }
        if(flag1==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
