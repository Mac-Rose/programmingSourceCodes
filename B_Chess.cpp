#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(),(c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string r,k;
    cin>>r>>k;
    char ar[8][8];
    fill(ar[0], ar[0] + 64 , '.');
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(i==r[0]-97 or j==r[1]-49) ar[i][j]='x';
            if(i==k[0]-97 and j==k[1]-49) ar[i][j]='x';
            
            if(i==k[0]-97-2 and j==k[1]-49-1 and k[0]-97-2>-1 and k[1]-49-1>-1) ar[i][j]='x';
            if(i==k[0]-97+2 and j==k[1]-49-1 and k[0]-97+2<9 and k[1]-49-1>-1) ar[i][j]='x';
            if(i==k[0]-97-2 and j==k[1]-49+1 and k[0]-97-2>-1 and k[1]-49+1<9) ar[i][j]='x';
            if(i==k[0]-97+2 and j==k[1]-49+1 and k[0]-97+2<9 and k[1]-49+1<9) ar[i][j]='x';
            
            if(i==k[0]-97-1 and j==k[1]-49-2 and k[0]-97-1>-1 and k[1]-49-2>-1) ar[i][j]='x';
            if(i==k[0]-97+1 and j==k[1]-49-2 and k[0]-97+1<9 and k[1]-49-2>-1) ar[i][j]='x';
            if(i==k[0]-97-1 and j==k[1]-49+2 and k[0]-97-1>-1 and k[1]-49+2<9) ar[i][j]='x';
            if(i==k[0]-97+1 and j==k[1]-49+2 and k[0]-97+1<9 and k[1]-49+2<9) ar[i][j]='x';

            if(i==r[0]-97-2 and j==r[1]-49-1 and r[0]-97-2>-1 and r[1]-49-1>-1) ar[i][j]='x';
            if(i==r[0]-97+2 and j==r[1]-49-1 and r[0]-97+2<9 and r[1]-49-1>-1) ar[i][j]='x';
            if(i==r[0]-97-2 and j==r[1]-49+1 and r[0]-97-2>-1 and r[1]-49+1<9) ar[i][j]='x';
            if(i==r[0]-97+2 and j==r[1]-49+1 and r[0]-97+2<9 and r[1]-49+1<9) ar[i][j]='x';
            
            if(i==r[0]-97-1 and j==r[1]-49-2 and r[0]-97-1>-1 and r[1]-49-2>-1) ar[i][j]='x';
            if(i==r[0]-97+1 and j==r[1]-49-2 and r[0]-97+1<9 and r[1]-49-2>-1) ar[i][j]='x';
            if(i==r[0]-97-1 and j==r[1]-49+2 and r[0]-97-1>-1 and r[1]-49+2<9) ar[i][j]='x';
            if(i==r[0]-97+1 and j==r[1]-49+2 and r[0]-97+1<9 and r[1]-49+2<9) ar[i][j]='x';
        }
    }
    int ans=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(ar[i][j]=='x') ans++;
        }
    }
    cout<<64-ans;
}