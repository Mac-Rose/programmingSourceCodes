#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;
bool wordPattern(string pattern, string s)
{
    stringstream ss(s);
    int i = 0;
    string word;
    map<string, char> freq;
    while (ss >> word)
        freq[word] = pattern[i++];
    set<char> st;
    for (auto &[a, b] : freq)
        st.emplace(b);
    if (st.size() == freq.size())
        return true;
    return false;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    wordPattern("abba", "dog cat cat dog");
}