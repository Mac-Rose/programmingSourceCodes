#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,cr=0,cb=0;
        cin>>n;
        string r,b;
        getline(cin>>ws,r);
        getline(cin>>ws,b);
        for(int i=0;i<n;i++)
        {
            if(r[i]>b[i]) cr++;
            else if(b[i]>r[i] ) cb++;
        }
        if(cr==cb) cout<<"EQUAL";
        else if(cr>cb) cout<<"RED";
        else cout<<"BLUE";
        cout<<"\n";
    }
    return 0;
}