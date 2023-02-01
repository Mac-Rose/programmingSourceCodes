#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        string a;
        getline(cin>>ws, a);
        
        for(int i=0;i<a.size();i++)
        {
            if(i%2==0) 
            {
                if(a[i]=='a') cout<<"b";
                else cout<<"a";
            }
            else 
            {
                if(a[i]=='z')
                cout<<"y";
                else cout<<"z";
            }
        }
        cout<<endl;
    }
    return 0;
}