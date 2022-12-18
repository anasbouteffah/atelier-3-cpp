#include <iostream>
using namespace std;

class Personne
{
protected:
    const char *nom;
    const char *Prenom;
    int date_naissance;

public:
    Personne(const char *monNom, const char *monPrenom, int p_date_naissance) : nom(monNom), Prenom(monPrenom), date_naissance(p_date_naissance){};
    void afficher()
    {
        cout << "Je suis " << Prenom << " " << nom << " mon date de naissance est :" << date_naissance << endl;
    }
};

class Employe : public Personne
{
protected:
    int salaire;

public:
    Employe(const char *monNom, const char *monPrenom, int p_date_naissance, int E_salaire) : Personne(monNom, monPrenom, p_date_naissance)
    {
        salaire = E_salaire;
    };
    void afficher()
    {
        cout << "Je suis " << Prenom << " " << nom << " mon date de naissance est :" << date_naissance << " et mon salire :" << salaire << endl;
    }
};

class Chef : public Employe
{
protected:
    const char *service;

public:
    Chef(const char *monNom, const char *monPrenom, int p_date_naissance, int E_salaire, const char *E_service) : Employe(monNom, monPrenom, p_date_naissance, E_salaire)
    {
        service = E_service;
    };
    void afficher()
    {
        cout << "Je suis " << Prenom << " " << nom << " mon date de naissance est :" << date_naissance << " et mon salire :" << salaire << " et mon service :" << service << endl;
    }
};

class Directeur : public Chef
{
protected:
    const char *societe;

public:
    Directeur(const char *monNom, const char *monPrenom, int p_date_naissance, int E_salaire, const char *E_service, const char *D_societe) : Chef(monNom, monPrenom, p_date_naissance, E_salaire, E_service)
    {
        societe = D_societe;
    };
    void afficher()
    {
        cout << "Je suis " << Prenom << " " << nom << " mon date de naissance est :" << date_naissance << " et mon salire :" << salaire << " et mon service :" << service << " societe :" << societe << endl;
    }
};

int main()
{
    Personne personne1("Nom1", "Prenom1", 1999);
    Employe employe1("NOM2", "PRENOM2", 1989, 9000);
    personne1.afficher();
    employe1.afficher();
    return 0;
}