#include <iostream>
#include<string>

using namespace std ;

 const int taille = 10;

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
  void push(Type var);


  Type tab[taille];


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
int top ;

};




template<class Type>
void Tableaux <Type>::push(Type var)
{tab[++top]= var;}


template <class Type>

Tableaux <Type>:: Tableaux(int taille)
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
     top = -1;
}
template <class Type>

 void Tableaux <Type> :: afficherDonne()
 {
     cout<<" Affichage des elements du tableau \n";
     for(i=0;i<M;i++)
     {
         cout<<"Element "<<i+1<<" : "<<tab[i]<<endl;
     }
 }

 template <class Type>

 void Tableaux <Type>:: altererDonne()
 {
 cout<<"\n Alteration des donnees \n";

 cout<<" Entrez l'element a alterer:";
 cin>>element;
 cout<<"\nEntrez la position:";
 cin>>position;
 tab[position-1] = element;

 }

 template <class Type>
 void Tableaux <Type>:: triTableau()
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

template <class Type>
 void Tableaux <Type>:: sommeElement()
 {
     for(i=0;i<M;i++)
     {
        somme += tab[i];
     }
     cout<<"\n\n Somme = "<<somme<<endl;
 }

 template <class Type>
 void  Tableaux <Type> :: plusPetitElement()
 {
     cout<<"\n Le plus petit element est "<<tab[0]<<endl;
 }
template <class Type>
 void Tableaux <Type> :: plusGrandElement()
 {

      cout<<"\n Le plus grand element est "<<tab[M-1]<<"\n\n";
 }


 int main()
 {



     Tableaux <float> obj(10);




    obj.push(12.5f) ;
     obj.push(12.33f) ;
     obj.push(45.89f) ;
     obj.push(200.23f) ;
     obj.push(15.33f) ;
     obj.push(1.56f) ;
     obj.push(53.45f) ;
     obj.push(35.89f) ;
     obj.push(11.22f) ;
     obj.push(9.45f) ;








     obj.afficherDonne();
     obj.altererDonne();
     obj.triTableau();
     obj.sommeElement();
     obj.plusPetitElement();
     obj.plusGrandElement();

 }

