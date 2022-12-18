#include <iostream>
using namespace std;

class shape
{
protected:
    float hauteur;
    float largeur;
    shape(float largeur, float hauteur)
    {
        this->largeur = largeur;
        this->hauteur = hauteur;
    }
};

class triangle : public shape
{
public:
    triangle(float largeur, float hauteur) : shape(largeur, hauteur) {}
    float forme()
    {
        return (largeur * hauteur);
    }
};

class rectangle : public shape
{
public:
    rectangle(float largeur, float hauteur) : shape(largeur, hauteur) {}
    float forme()
    {
        return (largeur * hauteur / 2);
    }
};

int main()
{
    triangle triangle1(4, 6);
    rectangle rectangle1(4, 6);
    cout << triangle1.forme() << endl;  // 24
    cout << rectangle1.forme() << endl; // 12
    return 0;
}