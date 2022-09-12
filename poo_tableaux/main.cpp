

#include <iostream>
#include<tableau.h>



using namespace std;

int main()
{

const int taille = 10;
    Tableaux obj(10);

    for(int i=0;i<taille;i++)
    {
        cout<<"Entrez l'element "<<i+1<<":";
        cin>>obj.tab[i];
    }

    obj.afficherDonne();
    obj.altererDonne();
    obj.triTableau();
    obj.sommeElement();
    obj.plusPetitElement();
    obj.plusGrandElement();

}
