#ifndef TABLEAU_H
#define TABLEAU_H

template <class Type>


class Tableaux
{

public:
    Tableaux(int taille);
  void afficherDonne();
  void altererDonne();
 void  triTableau();
  void sommeElement();
  void plusPetitElement();
  void plusGrandElement();

  int tab[10];


private:

  int i;
  int j;
  int M;
  Type somme;
  Type petitElement;
  Type grandElement;
  Type c;
  Type element;
  int position;


};

#endif // TABLEAU_H
