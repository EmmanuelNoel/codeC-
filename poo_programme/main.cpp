#include<iostream>

using namespace std;

class Boite
{
public:
double longueur;
double largeur;
double hauteur;
Boite(double lg, double lr, double ht)
{
longueur = lg ;
largeur = lr ;
hauteur = ht ;
}
double volume()
{ return longueur*largeur*hauteur ;}
} ;

int main()
{
    Boite b1(78.0,24.0,18.0);//Boite b1=Boite(78.0,24.0,18.0);
    Boite b2(8.0, 5.0, 1.0) ;
    double volb =0.0 ;
    volb = b1.volume() ;
    cout << endl ;
     cout<< "Volume de la boite b1 :" << volb << endl ;
    return 0 ;
}
