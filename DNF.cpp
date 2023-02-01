//This algorithm is used to sort array(with only three type of elements) without using extra space and time.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of entries: ";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];//Only Three type of elements 
    }
    int st=0,mi=0,sp=n-1,c;
    while(sp>mi)
    {
        if(ar[mi]==0)
        {
            c=ar[mi];
            ar[mi]=ar[st];
            ar[st]=c;
            st+=1;
        }
        else if(ar[mi]==2)
        {
            c=ar[mi];
            ar[mi]=ar[sp];
            ar[sp]=c;
            sp-=1;
        }
        else
        {
            mi+=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}