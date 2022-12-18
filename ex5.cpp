#include <iostream>
using namespace std;

class Animal
{

public:
    const char *nom;
    int age;
    Animal(const char *monNom) : nom(monNom){};
    void set_value(int age_value)
    {
        age = age_value;
    };
};

class Zebra : public Animal
{
public:
    const char *origin;
    Zebra(const char *myname, const char *myorigin) : Animal(myname), origin(myorigin){};
    void display_info() { cout << "Je suis: " << nom << " , mon age est : " << age << " et je suis de : " << origin << endl; };
};

class Dolphin : public Animal
{
public:
    const char *origin;
    Dolphin(const char *monNom, const char *monOrigin) : Animal(monNom), origin(monOrigin){};
    void display_info() { cout << "Je suis: " << nom << " , mon age est : " << age << " et je suis de : " << origin << endl; };
};

int main()
{
    const char *nom_zebra = "Zebra";
    const char *origin_zebra = "Australia";
    const char *nom_dolphin = "delphine";
    const char *origin_dolphin = "usa";
    Zebra zebra(nom_zebra, origin_zebra);
    zebra.set_value(5);
    zebra.display_info();
    Dolphin dolphine(nom_dolphin, origin_dolphin);
    dolphine.set_value(7);
    dolphine.display_info();
    return 0;
}