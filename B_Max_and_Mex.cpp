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
        long long n,k,h,l=0;
        cin>>n>>k;
        long long kk=k;
        vector<long long> v;
        
        for(int i=0;i<n;i++)
        {
            cin>>h;
            v.push_back(h);
        }
        int flag=0;
        sort(v.begin(),v.end());
        if(k==0) ;
        else
        for(int i=0;i<k;i++,kk--)
        {
            if(flag==1) break;
            if(v[0]==0) 
            {
                for(int i=l+1;i<=v.size();i++)
                {
                    if(i==n) 
                    {
                        l=n;
                        n++;
                        flag=1;
                        break;
                    }
                    else if(v[i]!=i)
                    {
                        l=i;
                        
                        break;
                    }
                }
            }
            else 
            {
                l=0;
                flag=2;
            }

            h=round(((l+v[v.size()-1])*1.0)/2);
            
            if(find(v.begin(),v.end(),h)==v.end()) 
            {
                v.push_back(h);
                sort(v.begin(),v.end());
                if(flag==2) break;
            }
            
            else break;
            
        }
        set<long long> s(v.begin(),v.end());
        if(flag==0) cout<<s.size()<<endl;
        else if(flag==2) cout<<s.size()<<endl;
        else cout<<s.size()+kk<<endl;
    }
    return 0;
}