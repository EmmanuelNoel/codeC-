#include<iostream>
#include<string>
#include "Personnage.h"


using namespace std;


void Personnage::recevoirDegats(int nbDegats)

{
    m_vie -= nbDegats;
//On enl�ve le nombre de d�g�ts re�us � la vie du personnage
    if (m_vie < 0) //Pour �viter d'avoir une vie n�gative
    {
        m_vie = 0; //On met la vie � 0 (cela veut dire mort)
    }
}
void Personnage::attaquer(Personnage &cible)
{

cible.recevoirDegats(m_degatsArme);

//On inflige � la cible les d�g�ts que cause notre arme
}
void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;
    if (m_vie > 100) //Interdiction de d�passer 100 de vie
    {
        m_vie = 100;
    }
}
void Personnage::changerArme(string nomNouvelleArme, int
                             degatsNouvelleArme)
{
m_nomArme = nomNouvelleArme;
m_degatsArme = degatsNouvelleArme;

}
bool Personnage::estVivant() const
{
    if (m_vie > 0) // Plus de 0 de vie ?
    {
        return true; //VRAI, il est vivant !
    }
    else
    {
        return false; //FAUX, il n'est plus vivant !
    }

}
    Personnage :: Personnage()
    {
        m_vie = 100;
        m_mana = 100;
       m_nomArme = "�p�e rouill�e";
m_degatsArme = 10;


    }


    Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100),
m_mana(100),m_nomArme(nomArme), m_degatsArme(degatsArme)
{
}

void Personnage :: afficherEtat () const
{
    cout<<"\n Vie : "<<m_vie<<endl;
    cout<<"\n Mana :"<<m_mana<<endl;
    cout<<" \n Nom Arme :"<<m_nomArme<<endl;

        cout<<"\n Degats Arme :"<<m_degatsArme<<endl;

}
