#include <iostream>

using namespace std;

class Base
{
public:
virtual void  afficher() = 0;

};

class Derv1: public Base
{
public:
void afficher()
{cout<<"Derv1\n";}
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
Derv2 dv2;
Base * ptr;
ptr = &dv1;
ptr ->afficher() ;
ptr = &dv2;
ptr ->afficher();
return 0;
}

