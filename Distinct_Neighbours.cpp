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
class MedianFinder
{
    int size;

public:
    priority_queue<int> firstHalf, secondHalf;
    MedianFinder()
    {
        size = 0;
    }

    void addNum(int num)
    {
        size++;
        if (size == 1)
            firstHalf.push(num);
        if (num > firstHalf.top())
            secondHalf.push(-num);
        else
            firstHalf.push(num);

        if (secondHalf.size() > firstHalf.size())
        {
            firstHalf.push(-secondHalf.top());
            secondHalf.pop();
        }
        else if (firstHalf.size() - secondHalf.size() > 1)
        {
            secondHalf.push(-firstHalf.top());
            firstHalf.pop();
        }
    }

    double findMedian()
    {
        if (size & 1)
        {
            return firstHalf.top();
        }
        else
        {
            return ((double)firstHalf.top() - secondHalf.top()) / 2;
        }
    }
};
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    MedianFinder obj;
    obj.addNum(1);
java    obj.addNum(2);
    obj.findMedian();
    obj.addNum(3);
    obj.findMedian();
}