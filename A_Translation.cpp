#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    string b;
    cin>>b;
    int flag=0;
    if(a.size()==b.size())
{    for(int i=0,j=a.size()-1;i<a.size();i++,j--)
    {
        if(a[j]!=b[i]) 
        {
            flag=1;
            break;
        }
    }
    (flag==1) ? cout<<"NO" : cout<<"YES" ;}
    else cout<<"NO";
    return 0;
}