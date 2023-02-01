#include<bits/stdc++.h>
using namespace std;

void cal(int i)
{
    string g;
    if(i%2==0) g="hate";
    else g="love";
    cout<< g;
}

int main()
{
    int tst;
    cin>>tst;
    for(int i=0;i<tst-1;i++)
    {
        cout<<"I ";
        cal(i);
        cout<<" that ";
    }
    cout<<"I ";
    cal(tst-1);
    cout<<" it";
    return 0;
}