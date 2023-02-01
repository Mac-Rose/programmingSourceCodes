/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,no;
    cin>>n;
    no=n;
    int rem;
    int rec=0;
    int count=0,cou=0;
    while(n>0)
    {
        rem=n%(int(pow (10,count+1)));
        n-=rem;
        count+=1;
    }

    cout<<"No of digits in the number is: "<<count<<endl;
    while(count>0)
    {
        int x=int(pow(10,cou));
        rem=(no%(int(pow (10,cou+1))))/x;
        rec+=rem*(pow(10,count-1));
        count--;
        cou+=1;
    }
    cout<<rec;
    return 0;
}*/

#include<iostream>//Optimized Code
using namespace std;

int main()
{
    signed long long n;
    int lastdigit,reverse=0;
    cin>>n;
    while(n>0)
    {
        int lastdigit= n%10;
        reverse = reverse*10 + lastdigit;
        n=n/10;
    }
    cout<<reverse;
    return 0;
}