#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin>>ws,a);
    int flag=0;
    (a.find('Q')==-1)? :flag++;
    (a.find('9')==-1)? :flag++;
    (a.find('H')==-1)? :flag++;
    (flag==0)?cout<<"NO" :cout<<"YES" ; 
    return 0;
}