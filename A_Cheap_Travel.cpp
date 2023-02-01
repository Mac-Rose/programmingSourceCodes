#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int ans;
    if((b*1.0)/m>a) ans=n*a;
    else
    {
        if(n%m==0) ans=(n/m)*b;
        else
        {
            if((n%m)*a>b) ans=((n/m)+1)*b;
            else
            {
                ans=(n/m)*b+(n%m)*a;
            }
            
        }
        
    }
    cout<<ans;
    return 0;
}