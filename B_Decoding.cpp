#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int ar[26]={0},ar1[26]={0};
        string a;
        cin>>a;
        if(a.size()%2==0)
        {
            for(int i=0;i<a.size()/2;i++)
            {
                ar[a[i]-97]++;
            }
            for(int i=a.size()-1;i>=a.size()/2;i--)
            {
                ar1[a[i]-97]++;
            }
            equal(begin(ar), end(ar), begin(ar1))? cout<<"YES\n" : cout<<"NO\n";
        }
        else 
        {
            for(int i=0;i<(a.size()/2);i++)
            {
                ar[a[i]-97]++;
            }
            for(int i=a.size()-1;i>(a.size()/2);i--)
            {
                ar1[a[i]-97]++;
            }
            equal(begin(ar), end(ar), begin(ar1))? cout<<"YES\n" : cout<<"NO\n";
        }
    }
    return 0;
}