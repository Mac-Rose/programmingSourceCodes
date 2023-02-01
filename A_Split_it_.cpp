#include<bits/stdc++.h>
using namespace std;

bool pal(string a, int k)
{
    bool y=true;
    int n=a.size();
    for(int i=0;i<k;i++)
    {
        if(a[i]==a[n-1-i]);
        else 
        {
            y=false;
            break;
        }
    }
    
    return y;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;

    while(tst--)
    {
        int n,k;
        cin>>n>>k;
        string a;
        cin>>a;
        if(k==0) cout<<"YES\n";
        else if(n<(2*k)+1) cout<<"NO\n";
        else
        {if(pal(a,k)) cout<<"YES\n";
        else cout<<"NO\n";}
    }
    return 0;
}