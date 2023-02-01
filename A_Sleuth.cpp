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
    string a;
    getline(cin>>ws,a);
    vector<char> v;
    v.pb('a');
    v.pb('e');
    v.pb('i');
    v.pb('o');
    v.pb('u');
    v.pb('y');
    v.pb('A');
    v.pb('E');
    v.pb('I');
    v.pb('O');
    v.pb('U');
    v.pb('Y');
    reverse(a.begin(),a.end());
    for(int i=1;i<a.size();i++)
    {
        if(a[i]==' ') continue;
        if(find(v.begin(),v.end(),a[i])!=v.end()) 
        {
            cout<<"YES";
            break;
        }
        else 
        {
            cout<<"NO";
            break;
        }
    }
}