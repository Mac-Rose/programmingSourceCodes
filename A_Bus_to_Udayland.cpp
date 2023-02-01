// Problem: A. Bus to Udayland
// Contest: Codeforces - Codeforces Round #369 (Div. 2)
// URL: https://codeforces.com/problemset/problem/711/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
    int n;
    cin>>n;
    string st="";
    for(int i=0;i<n;i++) 
    {
    	string it;
    	cin>>it;
    	st+=it;
        st+=" ";
    }
    int k=st.find("OO");
    if(k==string::npos)
    {
    	cout<<"NO";
    }
    else 
    {
    	cout<<"YES\n";
    	st[k]='+';
    	st[k+1]='+';
    	int m=st.size();
    	for(int i=0;i<m;i+=6)
    	{
    		cout<<st.substr(i,5)<<endl;
    	}
    }
}