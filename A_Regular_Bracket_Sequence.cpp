#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        string a;
        cin>>a;
        if(a.size()%2!=0)
        {
            cout<<"NO\n";
            continue;
        }
        else
        {
            if(a[0]==')' or a.back()=='(') 
            {
                cout<<"NO\n";
                continue;
            }
            else
            {
                int f=0;
                int s=0;
                for(int i=0;i<a.size()/2;i++)
                {
                    if(a[i]=='?') f++;
                    else if(a[i]=='(') s+=1;
                    else s-=1;
                }
                if(f%2!=0 and s>0) s-=1;
                else if(f%2!=0 and s<0) s+=1;
                int l=0,se=0;
                for(int i=a.size()/2;i<a.size();i++)
                {
                    if(a[i]=='?') se++;
                    else if(a[i]=='(') l+=1;
                    else l-=1;
                }
                if(se%2!=0 and l>0) s-=1;
                else if(se%2!=0 and l<0) s+=1;
                (s==-1*l) ? cout<<"YES\n" : cout<<"NO\n";   
            }
            
        }
        
    }
    return 0;
}