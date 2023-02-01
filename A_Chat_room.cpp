#include<bits/stdc++.h>
using namespace std;

int main()
{
    string k;
    cin>>k;
    int flag=1;
    vector<char> a(k.begin(),k.end());
    auto g= a.begin();
    g=find(a.begin(),a.end(),'h');
    vector <char> b{'h','e','l','l','o'};
    if(g==a.end()) cout<<"NO";
    else
    {for(int i=1;i<5;i++)
    {
        g=find(g+1,a.end(),b[i]);
        if(g==a.end())
        {
            cout<<"NO";
            flag=0;
            break;
        }
    }
    if(flag==1) cout<<"YES";}
    return 0;
}