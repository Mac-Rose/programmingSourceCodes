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
        char a[n][n];
        int x1,x2,y1,y2;
        int o=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='*') 
                {
                    if (o!=1)
                    {x1=i;
                    y1=j;
                    o=1;}
                    else
                    {
                        x2=i;
                        y2=j;
                    }
                    
                }
            }
        }
        if(x1==x2) 
        {
            if(x1<n-1)
            {a[x1+1][y1]='*';
            a[x1+1][y2]='*';}
            else
            {
                a[x1-1][y1]='*';
            a[x1-1][y2]='*';
            }
            
        }
        else if(y1==y2) 
        {
            if(y1<n-1)
            {a[x1][y1+1]='*';
            a[x2][y1+1]='*';}
            else
            {
                a[x1][y1-1]='*';
            a[x2][y1-1]='*';
            }
            
        }
        else
        {
            a[x2][y1]='*';
            a[x1][y2]='*';
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
}