#include <iostream>
using namespace std;

class myClass
{
public:
    myClass();
    ~myClass();
};

myClass::myClass()
{
    cout << "le constructeur a ete appele" << endl;
};
myClass::~myClass()
{
    cout << "le deconstructeur a ete appele" << endl;
};

int main()
{
    myClass class1;
    return 0;
}