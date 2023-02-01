#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    long long sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string a ;
    cin>>a;
    long long nx=0,ny=0,x=0,y=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='S') ny-=1;
        else if(a[i]=='W') nx-=1;
        else if(a[i]=='E') x+=1;
        else y+=1;
    }
    if(ex-sx>=0 and ex-sx>x) cout<<-1;
    else if(ex-sx<0 and ex-sx<nx) cout<<-1;
    else if(ey-sy<0 and ey-sy<ny) cout<<-1;
    else if(ey-sy>=0 and ey-sy>y) cout<<-1;
    else
    {
        nx=0,ny=0,x=0,y=0;
        if(ex-sx>=0 and ey-sy>=0)
        {
            for(int i=0;i<a.size();i++)
            {
                if(a[i]=='E') x+=1;
                else if(a[i]=='N') y+=1;
                if(x>=ex-sx and y>=ey-sy) 
                {cout<<i+1;break;}
            }
        }
        else if(ex-sx<0 and ey-sy>=0)
        {
            for(int i=0;i<a.size();i++)
            {
                if(a[i]=='W') nx-=1;
                else if(a[i]=='N') y+=1;
                if(nx<=ex-sx and y>=ey-sy) 
                {cout<<i+1;break;}
            }
        }
        else if(ex-sx>=0 and ey-sy<0)
        {
            for(int i=0;i<a.size();i++)
            {
                if(a[i]=='E') x+=1;
                else if(a[i]=='S') ny-=1;
                if(x>=ex-sx and ny<=ey-sy) 
                {cout<<i+1;break;}
            }
        }
        else
        {
            for(int i=0;i<a.size();i++)
            {
                if(a[i]=='W') nx-=1;
                else if(a[i]=='S') ny-=1;
                if(nx<=ex-sx and ny<=ey-sy) 
                {cout<<i+1;break;}
            }
        }
        
    }
    
    return 0;
}