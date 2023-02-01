#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while (tst--)
    {
        long long x,y;
        int cr=0,cl=0,cu=0,cd=0;
        cin>>x>>y;
        string a ;
        getline(cin>> ws, a);
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='U') cu++;
            else if(a[i]=='D') cd++;
            else if(a[i]=='R') cr++;
            else cl++;
        }
        if(x>=0 and y>=0) (cr>=x and cu>=y)?cout<<"YES\n" : cout<<"NO\n";
        else if(x<=0 and y>=0) (cl>=-x and cu>=y)?cout<<"YES\n" : cout<<"NO\n";
        else if(x>=0 and y<=0) (cr>=x and cd>=-y)?cout<<"YES\n" : cout<<"NO\n";
        else if(x<=0 and y<=0) (cl>=-x and cd>=-y)?cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}