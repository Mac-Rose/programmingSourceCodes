#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        string a;
        getline(cin>>ws,a);
        if(a.size()<=10) cout<<a<<"\n";
        else 
        {
            int d=a.size()-2;
            cout<<a[0]<<d<<a[a.size()-1]<<"\n";
        }
    }
    return 0;
}