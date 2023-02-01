#include <iostream>
#include <iomanip>

using namespace std;
class complx
{
private:
    float real, imag;

public:
    void getc()
    {
        cout << "Enter real & imaginary part" << endl;
        cin >> real >> imag;
    }
    void setc(float x = 10, float y = 5)
    {
        real = x;
        imag = y;
    }
    void dispc()
    {
        cout << real;
        if (imag >= 0)
            cout << " +i " << imag << endl;
        else
            cout << " -i " << -imag << endl;
    }
    complx sum(complx c)
    {
        complx res;
        res.real = real + c.real;
        res.imag = imag + c.imag;
        return (res);
    }
    complx mult(complx c)
    {
        complx res;
        res.real = real * c.real - imag * c.imag;
        res.imag = real * c.imag + imag * c.real;
        return res;
    }
    complx conj()
    {
        complx res;
        res.real = real;
        res.imag = -imag;
        return res;
    }
};
int main()
{
    complx c1, c2, c3;
    char c = 'Y';
    while (c == 'Y')
    {
        int choice;
        cout << "For Addition : 1\n";
        cout << "For Multiplication : 2\n";
        cout << "For Conjugate : 3\n";
        cout << "For Division : 4\n";
        cout << "For Subtraction : 5\n";
        cout << "Enter your choice : ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "\n\nAddition\n";
            c1.getc();
            c2.getc();
            c3 = c1.sum(c2);
            c3.dispc();
            cout << "Do you want to continue (Y/N):";
            cin >> c;
        }
        else if (choice == 2)
        {
            cout << "\n\nMultiplication\n";
            c1.getc();
            c2.getc();
            c3 = c1.mult(c2);
            c3.dispc();
            cout << "Do you want to continue (Y/N):";
            cin >> c;
        }
        else if (choice == 3)
        {
            cout << "\n\nConjugate\n";
            c1.getc();
            c3 = c1.conj();
            c3.dispc();
            cout << "Do you want to continue (Y/N):";
            cin >> c;
        }
    }

    return (0);
}
