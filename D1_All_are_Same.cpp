#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()

int sum(int num1, int num2)
{
    return num1 + num2;
}
int sum(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

signed main()
{
    cout << sum(20, 15) << endl;
    cout << sum(81, 100, 10);
}