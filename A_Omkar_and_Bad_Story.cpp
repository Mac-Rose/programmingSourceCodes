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
        int tst;
        cin>>tst;
        while(tst--)
        {
            int n;
            cin>>n;
            vi v(n);
            int flag=0;
            for(auto &it : v)
            {
                cin>>it;
                if(it<0) flag=1;
            }
            if(flag==1)
            {
                cout<<"NO";
                cout<<endl;
                continue;
            }
            sort(v.begin(),v.end());
            int ma=v[n-1];
            cout<<"YES\n";
            cout<<ma+1<<endl;
            for(int i=0;i<=ma;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }