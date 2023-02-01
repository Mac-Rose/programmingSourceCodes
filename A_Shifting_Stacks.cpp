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
        int flag=1;
        unsigned long long s=0;
        unsigned long long g=0;
        for(int i=0;i<n;i++)
        {
            cin>>g;
            s+=g;
            if(s<((i*(i+1))/2)) 
            {
                cout<<"NO\n";
                flag=0;
                break;
            }
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        if(flag==1) cout<<"YES\n";
    }
    return 0;
}