#include <iostream>
#include<figures.h>

using namespace std;

void Pave :: getDonne()
{
    cout<<"Entrer la longueur :";
    cin>>longueur;
    cout<<"Entrer la largeur :";
    cin>>largeur;
    cout<<"Entrer la hauteur :";
    cin>>hauteur;
}

void Pave :: afficherResultat()
{
    cout<<"Aire = "<<longueur*longueur*longueur<<"\n";
    cout<<"Volume = "<<longueur*largeur*hauteur<<"\n";

}

