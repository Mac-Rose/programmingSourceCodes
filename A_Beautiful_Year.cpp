#include<bits/stdc++.h>
using namespace std;


bool check(int n)
{
    string b=to_string(n);
    set<char> s(b.begin(),b.end());
    if(s.size()==4)
    return false;
    else return true;
}

int main()
{
    int n;
    cin>>n;
    n++;
    while(check(n))
    {
        n++;
    }
    cout<<n;
    return 0;
}