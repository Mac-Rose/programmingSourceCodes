#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        string a,b;
        cin>>a;
        b=a;
        if(a.find("00")==-1) 
        {
            cout<<"YES\n";
            continue;
        }
        reverse(b.begin(),b.end());
        if(a.find("11")<a.size()-1-b.find("00")) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
    return 0;
}