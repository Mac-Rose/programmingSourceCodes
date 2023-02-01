// Problem: C. Fixing Typos
// Contest: Codeforces - Codeforces Round #211 (Div. 2)
// URL: https://codeforces.com/problemset/problem/363/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define F first
#define int long long
#define S second

/*********************************************************************
 * The master have failed more times than the student has ever tried.*
 *********************************************************************/
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin>>a;
    int i=0;
    while(i<a.size())
    {
    	int temp=0;
    	char j=a[i];
    	while(j==a[i])
    	{
    		temp++;
    		i++;
    	}
    	if(temp>=3)
    	{
    		i-=temp;
    		a.erase(i,temp);
    		a.insert(i,2,j);
    		i+=2;
    	}
    }
    i=0;
    while(i<a.size())
    {
    	string b=a.substr(i,4);
        if(b[0]==b[1] and b[2]==b[3])
        {
            a.erase(i+2,1);
        }
        i++;
    }
    cout<<a;
}