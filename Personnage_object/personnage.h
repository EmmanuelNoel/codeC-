#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include<string>
#include "Arme.h" //Ne PAS oublier d'inclure Arme.h pour en avoir la définition}

class Personnage
{
        public:

    Personnage();
    Personnage(std :: string nomArme , int degatsArme);
   void recevoirDegats(int nbDegats);
   void attaquer(Personnage &cible);
   void boirePotionDeVie(int quantitePotion );
   void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
   bool estVivant() const;
void afficherEtat()const;


   private:

    int m_vie;
    int m_mana;
    std :: string m_nomArme;
    int m_degatsArme;

};




#endif // PERSONNAGE_H_INCLUDED
