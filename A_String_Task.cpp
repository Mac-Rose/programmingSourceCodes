#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a ;
    getline(cin>>ws, a);
    set<char> li={'a','e','i','o','u','y','A','E','I','O','U','Y'};
    for(int i=0;i<a.size();i++)
    {
        auto it = find(li.begin(),li.end(),a[i]);
        if(it==li.end())
        {
            if(a[i]<97)
            cout<<"."<<char(a[i]+32);
            else cout<<"."<<a[i];
        }
    }
    cout<<"\n";
    return 0;
}