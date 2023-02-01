#include <iostream>
#include <algorithm>
using namespace std;

int grate(int a, int b)
{
    if (b > a)
        return b;
    else
        return a;
}
namespace Mac
{
    string grate(int a, int b)
    {
        if (b > a)
            return "B is greater";
        else
            return "A is greater";
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << Mac::grate(a, b) << endl;
    cout << grate(a, b);
    return 0;
}