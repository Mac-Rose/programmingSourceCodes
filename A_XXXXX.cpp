#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n, x;
        int flag=-1;
        long long h=0;
        int s=0,l=0;
        cin>>n>>x;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            h+=ar[i];
            if(ar[i]%x==0 and flag==-1) 
            {
                s++;
            }
            else flag+=1;
        }
        for(int i=n-1;i>-1;i--)
        {
            if(ar[i]%x==0) l++;
            else break;
        }
        if(h%x!=0) cout<<n<<endl;
        else
        {if(s==0 and l==0) cout<<n-1;
        else if(s==0 or l==0) cout<<n-1;
        
        else if (s+l>n) cout<<-1;
        else
        {
            if(s>l) cout<<n-l-1;
            else cout<<n-s-1;
        }
        cout<<"\n";}
        
    }
    return 0;
}