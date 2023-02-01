#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin>>ws,a);
    set<char> s;
    int g=a.size();
    for(int i=1;i<=a.size()-2;i+=3)
    {
        s.insert(a[i]);
    }
    cout<<s.size();
    return 0;
}