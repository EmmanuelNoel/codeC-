
#include <iostream>

using namespace std;

class Base
{
public:
virtual void afficher()
{cout<<"Base\n";}
};
class Derv1: public Base
{
public:
void afficher()
{cout<<"Entrer la longueur :";
    cin>>longueur;
    cout<<"Entrer la largeur :";
    cin>>largeur;
    cout<<"Entrer la hauteur :";
    cin>>hauteur;}
private:
int longueur;
int largeur;
int hauteur;
};
class Derv2: public Base
{
public:
void afficher()
{cout<<"Derv2\n";}
};


int main()
{
    Derv1 dv1;
    Base* ptr;
    ptr = &dv1;
    ptr ->afficher();


return 0;
}
