#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    int flag=0;
    int v[26]={0},m[26]={0};
    for(int i=0;i<a.size();i++)
    {
        v[(a[i]-65)]++;
    }
    for(int i=0;i<b.size();i++)
    {
        v[(b[i]-65)]++;
    }
    for(int i=0;i<c.size();i++)
    {
        m[(c[i]-65)]++;
    }
    for(int i=0;i<26;i++)
    {
        if(v[i]!=m[i])
        {
            flag=1;
            break;
        }
    }
    (flag==1) ? cout<<"NO" : cout<<"YES";
    return 0;
}