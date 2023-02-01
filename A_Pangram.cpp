#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    int ar[26]={0};
    for(int i=0;i<a.size();i++)
    {
        ar[a[i]-97]++;
    }
    (find(ar,ar+26,0)!=ar+26) ? cout<<"NO" : cout<<"YES" ;
    return 0;
}