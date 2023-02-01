#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        string a1=a.substr(i,1);
        string b1=b.substr(i,1);
        cout<<(stoi(a1) ^ stoi(b1));
    }
    return 0;
}