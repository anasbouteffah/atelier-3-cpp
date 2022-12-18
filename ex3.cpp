#include <iostream>
using namespace std;

class Complex
{
private:
    float re;
    float im;

public:
    Complex()
    {
        re = 0;
        im = 0;
    }
    Complex(float x, float y)
    {
        re = x;
        im = y;
    }
    void saisir()
    {
        cout << "Partie reelle ? ";
        cin >> re;
        cout << "Partie imaginaire ? ";
        cin >> im;
    }
    void affiche()
    {
        cout << re << "+ i" << im << endl;
    }
    Complex add(Complex c)
    {
        return Complex(re + c.re, im + c.im);
    }

    Complex produit(Complex d)
    {
        return Complex((re * d.re - im * d.im), (re * d.im + im * d.re));
    }
};

int main()
{
    Complex c1(4, 3);
    c1.affiche(); // 4+i3
    Complex c2;
    c2.saisir();  // 2,3
    c2.affiche(); // 2+i3
    Complex c3 = c1.add(c2);
    Complex c4 = c1.produit(c2);
    c3.affiche(); // 6+i6
    c4.affiche(); // -1+ i18
    return 0;
}