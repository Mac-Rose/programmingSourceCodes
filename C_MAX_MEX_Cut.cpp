#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int ans = 0;
        vi mex(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i] and a[i] == '0')
                mex[i]++;
            else if (a[i] + b[i] == 97)
                mex[i] += 2;
        }
        stack<int> stack;
        for (int i = 0; i < n; i++)
        {
            if (stack.empty())
                stack.push(mex[i]);
            else if (stack.top() == 1 and mex[i] == 0)
            {
                stack.pop();
                stack.push(2);
            }
            else if (stack.top() == 1)
                stack.push(mex[i]);
            else if (stack.top() == 0 and mex[i] != 0)
            {
                stack.pop();
                stack.push(2);
            }
            else if (stack.top() == 2)
                stack.push(mex[i]);
        }
        while (!stack.empty())
        {
            ans += stack.top();
            stack.pop();
        }
        cout << ans << endl;
    }
}