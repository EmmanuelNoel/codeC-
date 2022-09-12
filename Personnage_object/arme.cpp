#include <iostream>
#include<string>
using namespace std;

void Arme :: afficher() const
{
   cout<<"\n Arme : "<<m_nom<<" Degats "<<m_degats<<endl;

}

void Arme :: changer(std::string nom,int degats)
{
   m_nom = nom;
   m_degats = degats;
}

Arme:: Arme(): m_nom("Epée rouillée"),m_degats(10)
{


}

Arme :: Arme(std::string nom,int degats) : m_nom(nom),m_degats(degats)
{

}


int Arme::getDegats() const
{
return m_degats;
}


