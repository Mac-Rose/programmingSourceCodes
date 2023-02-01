#include <bits/stdc++.h>
using namespace std;

char inverse(char a)
{
    if (a == '{')
        return '}';
    else if (a == '(')
        return ')';
    else if (a == '[')
        return ']';
    else
        return '1';
}

signed main()
{
    string a;
    cin >> a;
    stack<char> stack;
    vector<char> list1{']', '}', ')'};
    for (auto it : a)
    {
        if (stack.empty())
            stack.push(it);
        else if (it == inverse(stack.top()))
        {
            stack.pop();
        }
        else
            stack.push(it);
    }
    (stack.empty()) ? cout << "Balanced" : cout << "Not Balanced";
}