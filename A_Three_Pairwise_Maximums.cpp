#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        vector<int> a;
        int x,y,z;
        cin>>x>>y>>z;
        a.push_back(x);
        a.push_back(y);
        a.push_back(z);
        sort(a.begin(),a.end());
        if(a[1]==a[2]) 
        {
            cout<<"YES\n";
            cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<"\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}