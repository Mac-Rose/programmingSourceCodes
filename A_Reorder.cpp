#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        int m;
        int s=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            s+=g;
        }
        if(s==m) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}