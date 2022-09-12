#ifndef TABLEAU_H
#define TABLEAU_H

class Tableaux
{

public:
    Tableaux(int taille);
  void afficherDonne();
  int altererDonne();
 void  triTableau();
  void sommeElement();
  void plusPetitElement();
  void plusGrandElement();

  int tab[10];


private:

  int i;
  int j;
  int M;
  int somme;
  int petitElement;
  int grandElement;
  int c;
  int element;
  int position;


};

#endif // TABLEAU_H
