#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        int ar[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int flag=0;
        for(int i=1;i<n;i++)
        {
            if(ar[i]>ar[i-1]+1) 
            {
                flag=1;
                break;
            }
        }
        (flag==1) ? cout<<"NO\n" : cout<<"YES\n";
    }
    return 0;
}