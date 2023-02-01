#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int flag=0;
    int c,h;
    c=(stoi(b.substr(3,2)) - stoi(a.substr(3,2)));
    if(c<0) 
    {
        flag=1;
        c=60+c;
    }
    h=(stoi(b.substr(0,2)) - stoi(a.substr(0,2)));
    if(flag==1) c+=(h-1)*60;
    else c+=h*60;
    c/=2;
    h=c/60;
    int m=c%60;
    int x;
    x=stoi(a.substr(3,2))+m;
    if((stoi(a.substr(3,2))+m)>=60) 
    {
        x=(stoi(a.substr(3,2))+m)-60;
        h++;
    }
    cout<<setfill('0')<<setw(2)<<stoi(a.substr(0,2))+h;
    cout<<":";
    cout<<setfill('0')<<setw(2)<<x;
    return 0;
}