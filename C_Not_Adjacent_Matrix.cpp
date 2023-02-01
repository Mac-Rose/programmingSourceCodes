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
        int n;
        cin>>n;
        if(n==2) 
        {
            cout<<-1<<endl;
            continue;
        }
        else if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        else
        {
            int ar[n][n]={0};
            int k=1;
            int m=0;
            if(n&1) m=2+((n*n)/2);
            else m=(n*n)/2+1;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(!((i+j)&1)) 
                    {
                        ar[i][j]=k;
                        k++;
                    }
                    else
                    {
                        ar[i][j]=m;
                        m++;
                    }
                    
                }
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<ar[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        
    }
}