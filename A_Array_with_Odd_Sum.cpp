#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,a[2001]={0},coe=0,coo=0,su=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                coe++;
            }
            else coo++;
            su+=a[i];
        }
        if(su%2!=0) cout<<"YES";
        else
        {
            if(coo%2==0 ) 
            {
                if(coe>0 && coo>0) cout<<"YES";
                else cout<<"NO";
            }
            else cout<<"YES";
        }
        cout<<"\n";
    }
    return 0;
}