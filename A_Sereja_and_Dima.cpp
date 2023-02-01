#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s=0,d=0;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int i=0,j=n-1;
    int k=0;
    while(i<=j)
    {
        if(k%2==0)
        {if(ar[i]>ar[j])
        {
            d+=ar[i];
            i++;
        }
        else
        {
            d+=ar[j];
            j--;
        }}
        else
        {
            if(ar[i]>ar[j])
        {
            s+=ar[i];
            i++;
        }
        else
        {
            s+=ar[j];
            j--;
        }
        }
        k++;
        
    }
    cout<<d<<" "<<s;
    return 0;
}