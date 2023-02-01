#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    int n;
    set <int> s;
    int i;
    cin>>i;
    int g=0;
    while(g<i)
    {
        cin>>n;
        s.insert(n);
        g++;
    }
    cin>>i;
    g=0;
    while(g<i)
    {
        cin>>n;
        s.insert(n);
        g++;
    }
    if(s.size()==tst) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    return 0;
}