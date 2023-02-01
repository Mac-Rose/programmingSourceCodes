#include<bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define forn(i, x, n) for(int i = x; i < (int)(n); i++)
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
const int mod = 1e9+7;


int main(){

    int n;
	cin >> n;
	vi a(n);
	forn(i, 0, n) cin >> a[i];
	int ans = n-1;
	forn(i, 0, n) {
		set<int> s;
		bool dont = 0;
		forn(k, 0, i) if(s.count(a[k]) == 0) s.insert(a[k]); else dont = 1;
		if(dont) break;
		for(int k = n-1; k >= i; k--) if(s.count(a[k]) == 0) s.insert(a[k]); else break;
		ans = min(ans, n-(int)s.size());
	}
	cout << ans;

}
