#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ch,rem;
    ch=0;
    cin>>n;
    int count=1;
    int no=n;
    while(n>0)
    {
        rem=n%10;
        ch+=pow(rem,3);
        n=n/10;
    }
    if(ch==no) cout<<"Armstrong";
    else cout<<"Not Armstrong";
    return 0;
}