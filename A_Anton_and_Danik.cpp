#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    string a ;
    cin>>a;
    int ca=0,cd=0;
    for(int i=0;i<tst;i++)
    {
        if(a[i]=='A') ca++;
        else cd++;
    }
    if(ca>cd) cout<<"Anton";
    else
    {
        if(ca==cd) cout<<"Friendship";
        else cout<<"Danik";
    }
    
    return 0;
}