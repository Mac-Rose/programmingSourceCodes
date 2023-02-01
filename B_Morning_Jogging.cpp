#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second

pii sm(vector<vi> &ar,int n,int m)
{
    pii ans=mp(INT_MAX,INT_MAX);
    int as=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ar[i][j]<as)
            {
                as=ar[i][j];
                ans=mp(i,j);
            }
        }
    }
    return ans;
}

int fi(vector<vi> &ar, int i,int m)
{
    int y;
    for(int j=0;j<m;j++)
    if(ar[i][j]!=INT_MAX)
    {
        y=ar[i][j];
        ar[i][j]=INT_MAX;
        break;
    }
    return y;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,m;
        cin>>n>>m;
        vector <vector<int>> ar( n , vector<int> (m, 0));
        vector <vector<int>> v( n , vector<int> (m, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int c;
                cin>>c;
                ar[i][j]=c;
            }
        }
        for(int i=0;i<m;i++)
        {
            pair <int,int>y=sm(ar,n,m);
            v[y.F][i]=ar[y.F][y.S];
            ar[y.F][y.S]=INT_MAX;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]==0)
                {
                    v[i][j]=fi(ar,i,m);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}