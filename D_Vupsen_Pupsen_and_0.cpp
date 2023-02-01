#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    friend ostream &operator<<(ostream &out, const Complex &c);
};

ostream &operator<<(ostream &out, const Complex &c)
{
    out << c.real;
    out << " + i" << c.imag << endl;
    return out;
}
int aP(int a, int b)
{
    cout << a + b << endl;
}
int main()
{
    aP(2, 3);
    Complex c1(2, 3);
    cout << c1;
    return 0;
}
