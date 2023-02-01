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
        int s=0;
        int g=0;
        for(int i=0;i<n;i++)
        {
            cin>>g;
            s+=g;
        }
        if(s-n>0) cout<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}