#include<bits/stdc++.h>
using namespace std;

int digit(int n)
{
    int count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    return count;
}
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        int d=n%10;
        int g=digit(n);
        cout<<10*(d-1)+g*(g+1)/2<<"\n";
    }
    return 0;
}