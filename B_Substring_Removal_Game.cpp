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
        vector <int> v;
        int i=0;
        while(i<a.size())
        {
            int count=0;
            if(a[i]=='1')
            {
                for(int j=i;a[j]=='1';j++)
                {
                    if(a[j]=='1')
                    {
                        count++;
                        i++;
                    }
                }
            v.push_back(count);    
            }
            else i++;
        }
        sort(v.begin(),v.end());
        int s=0;
        for(int k=v.size()-1;k>=0;k-=2)
        {
            s+=v[k];
        }
        cout<<s<<"\n";
    }
    return 0;
}