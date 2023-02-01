#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int flag=1;
        unsigned long long  n,i;
        cin>>n;
        for( i=1;i<=cbrt(n);i++)
        {
            unsigned long long b=cbrt(n-i*i*i);
            if(i*i*i + b*b*b ==n && b>0) 
            {
                cout<<"YES";
                flag=0;
                break;
            }
        }   
        if(flag==1) cout<<"NO";
        cout<<endl;
    }
    return 0;
}