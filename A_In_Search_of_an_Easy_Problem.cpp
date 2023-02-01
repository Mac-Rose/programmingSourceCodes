#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int flag=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        if(g==1)
        {
            cout<<"HARD";
            flag=0;
            break;
        }
    }
    if(flag==1) cout<<"EASY";
    return 0;
}