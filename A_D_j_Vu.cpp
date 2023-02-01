#include<bits/stdc++.h>
using namespace std;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        string a;
        cin>>a;
        int flag=1;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!='a')
            {
                flag=0;
                cout<<"YES\n";
                a.insert(a.size()-i,"a");
                cout<<a;
                break;
            }
        }
        if(flag==1) cout<<"NO";
        cout<<endl;
    }
}