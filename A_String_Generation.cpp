#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,k;
        cin>>n>>k;
        if(k%2==0)
        {
            for(int i=0;i<k;i++)
            {
                if(i<k/2)
                cout<<"a";
                else cout<<"b";
            }
            for(int i=k;i<n;i++)
            {
                cout<<"c";
            }
        }
        else 
        {
            for(int i=0;i<k;i++)
            {
                if(i<k/2)
                cout<<"a";
                else if(i==k/2) cout<<"c";
                else cout<<"b";
            }
            for(int i=k;i<n;i++)
            {
                cout<<"c";
            }
        }
        cout<<"\n";
    }
    return 0;
}