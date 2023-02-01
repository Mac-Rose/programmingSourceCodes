#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int flag=1;
    int count=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='4' or a[i]=='7') count++;
    }
    string b= to_string(count);
    for(int i=0;i<b.size();i++)
    {
        if(b[i]!='4' and b[i]!='7') 
        {
            flag=0;
            break;
        }
    }
    (flag==0) ? cout<<"NO" : cout<<"YES";
    return 0;
}