#include <iostream>
#include<string>
#include "personnage.h"

using namespace std;

int main()
{
Personnage goliath("Epée aiguisée",20),david;
goliath.attaquer(david);
david.boirePotionDeVie(20);
goliath.attaquer(david);
david.attaquer(goliath);
goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
goliath.attaquer(david);

//Temps mort.Voyons la vie de chacun

cout<<"\nDavid "<<endl;
david.afficherEtat();
cout<<endl<<"Goliath"<<endl;
goliath.afficherEtat();
return 0;

}
