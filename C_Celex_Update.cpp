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

int tmp;
stack<int> Stackfun(stack<int> &input)
{
    stack<int> tmpStack;
    while (!input.empty())
    {
        tmp = input.top();
        input.pop();
        while (!tmpStack.empty() && tmpStack.top() > tmp)
        {
            input.push(tmpStack.top());
            tmpStack.pop();
        }
        tmpStack.push(tmp);
    }
    return tmpStack;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    stack<int> tmpStack, input;
    input.push(2);
    input.push(16);
    input.push(37);
    input.push(29);
    input.push(91);
    input.push(74);
    tmpStack = Stackfun(input);
    while (tmpStack.empty() == false)
    {
        cout << tmpStack.top() << ' ';
        tmpStack.pop();
    }
}