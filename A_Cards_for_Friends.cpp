#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,w,h,count =0;
        cin>>w>>h>>n;
        while(w%2==0 || h%2==0)
        {
            if(w%2==0) 
            {
                w/=2;
                count++;
            }
            if(h%2==0) 
            {
                h/=2;
                count++;
            }
        }
        if(pow(2,count)>=n) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}