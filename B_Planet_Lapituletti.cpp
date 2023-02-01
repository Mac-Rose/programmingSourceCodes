#include<bits/stdc++.h>
using namespace std;

vector<int> v{3,4,6,7,9};

string ref(string a)
{
    string b;
    if(a.back()=='5') b='2';
    else if(a.back()=='2') b='5';
    else b+=a.back();
    for(int i=a.size()-2;i>-1;i--)
    {
        if(a[i]=='5') b+='2';
        else if(a[i]=='2') b+='5';
        else b+=a[i];
    }
    return b;
}

string inc(string &a, int hh, int mm)
{
    int m=stoi(a.substr(3,2));
    int h=stoi(a.substr(0,2));
    m++;
    if(m==mm) 
    {
        h++;
        m=0;
        if(h==hh) h=0;
    }
    if(h/10==0)
    {a='0';a+=to_string(h);}
    else a=to_string(h);
    a+=':';
    if(m/10==0)
    {a+='0';a+=to_string(m);}
    else a+=to_string(m);
    return a;
}

bool valid(string a,int hh, int mm)
{
    int flag=1;
    for(int i=0;i<a.size();i++)
    {
        int u=a[i]-'0';
        if(find(v.begin(),v.end(),u) != v.end()) 
        {
            flag=0;
            break;
        }
    }
    if(flag==0) return false; 
    else
    {
        int m=stoi(a.substr(3,2));
        int h=stoi(a.substr(0,2));
        if(m>=mm) return false;
        else
        {
            if(h>=hh) return false;
            else return true;
        }
        
    }
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    string a;
    while(tst--)
    {
        int hh,mm;
        cin>>hh>>mm;
        
        cin>>a;
        bool u=true;
        while(u==true)
        {
            if(valid(a,hh,mm)==true) 
            {
                if(valid(ref(a),hh,mm)==true) u=false;
                else inc(a,hh,mm);
            }
            else inc(a,hh,mm);
        }
        cout<<a<<endl;
    }
    return 0;
}