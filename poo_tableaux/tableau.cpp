#include <iostream>
#include<tableau.h>


using namespace std;

Tableaux :: Tableaux(int taille)
{
 i= 0;
 j =0;
  somme=0;
   petitElement = 0;
     grandElement = 0;
     M= taille;
     c=0;
     position=0;
     element=0;


}

 void Tableaux :: afficherDonne()
 {
     cout<<" Affichage des elements du tableau \n";
     for(i=0;i<M;i++)
     {
         cout<<"Element "<<i+1<<" : "<<tab[i]<<endl;
     }
 }
 int Tableaux :: altererDonne()
 {
 cout<<"\n Alteration des donnees \n";

 cout<<" Entrez l'element a alterer:";
 cin>>element;
 cout<<"\nEntrez la position:";
 cin>>position;
 tab[position-1] = element;

 }

 void Tableaux:: triTableau()
 {
     for(i=0;i<M;i++)

      {
          for(j=0;j<M;j++)
          {
              if(tab[i] < tab[j])
              {
                  c=tab[i];
                  tab[i]=tab[j];
                  tab[j]=c;
              }
          }
      }
     cout<<"\n\n Tri en ordre croissant \n";

      for(i=0;i<M;i++)
      {
          cout<<"  "<<tab[i]<<" ";

      }


 }


 void Tableaux :: sommeElement()
 {
     for(i=0;i<M;i++)
     {
        somme += tab[i];
     }
     cout<<"\n\n Somme = "<<somme<<endl;
 }

 void  Tableaux :: plusPetitElement()
 {
     cout<<"\n Le plus petit element est "<<tab[0]<<endl;
 }

 void Tableaux :: plusGrandElement()
 {

      cout<<"\n Le plus grand element est "<<tab[M-1]<<"\n\n";
 }


