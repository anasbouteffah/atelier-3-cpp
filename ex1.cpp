#include <iostream>
using namespace std;
class Mere
{
public:
    void afficher()
    {
        cout << "Mére" << endl;
    }
};

class Fille : public Mere
{
public:
    void afficher()
    {
        cout << "fille" << endl;
    }
};

int main()
{
    Fille fille;
    fille.afficher();

    return 0;
}