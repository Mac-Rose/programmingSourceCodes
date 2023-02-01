#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int c=0;
    cin>>n;
    int a[101]={0},b[101]={0};
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        a[g]++;
        cin>>g;
        b[g]++;
    }
    for(int i=1;i<=100;i++)
    {
        c+=a[i]*b[i];
    }
    cout<<c;
    return 0;
}