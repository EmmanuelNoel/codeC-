#include<iostream>

using namespace std;

class ObjetVolant
{
 protected:
int nbreAiles;
public:
ObjetVolant(int n)
{
nbreAiles= n;
cout <<"Demarrage de objet volant a " <<nbreAiles<<" ailes" <<endl;
}
virtual ~ObjetVolant()
{
cout <<"\nArret de objet volant a " <<nbreAiles<<" ailes" <<endl;
}
void vole()
{ cout <<"\nca vole ..." <<endl; }
};

 class ObjetRoulant
{
protected:
 int nbreRoues;
public:
 ObjetRoulant(int n)
{
nbreRoues= n;
cout <<"\nDemarrage de objet roulant a " <<nbreRoues<<" ailes" <<endl;
}
virtual ~ObjetRoulant()
{
cout <<"\nArret de objet roulant a " <<nbreRoues<<" ailes" <<endl;
}
void roule()
{cout <<"\nca roule ..." <<endl; }
};

class Avion: public ObjetVolant, public ObjetRoulant
{
public:
Avion (): ObjetVolant(2), ObjetRoulant(2)
 {
cout <<"\nDemarrage de avion" <<endl;
}
  ~Avion ()
{
cout <<"\nArret de avion" <<endl;
}
};


int main()
{


    Avion object;
    object.ObjetVolant::vole();
    object.ObjetRoulant::roule();

    cout<<endl;

}
