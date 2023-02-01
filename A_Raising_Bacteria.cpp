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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a=0;
	for(int i=0;i<ceil(log2(n)+1);i++)
	{
		int k= n>>i;
		if(k&1) a+=1;
	}
    cout<<a;
}