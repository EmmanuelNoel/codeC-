#include <iostream>

using namespace std ;

 const int M = 10;

template <class Type>


class Tableaux
{

public:
    Tableaux();
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

Tableaux <Type>:: Tableaux()
{
 i= 0;
 j =0;

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



     Tableaux <char> obj;




     obj.push("aime") ;
     obj.push("john") ;
     obj.push("elise") ;
     obj.push("amen") ;
     obj.push("yugsgg") ;
     obj.push("tredhhdh") ;
     obj.push("etrhsh") ;
     obj.push("honohsh") ;
     obj.push("emile") ;
      obj.push("alihsh") ;




     obj.afficherDonne();
     obj.altererDonne();
     obj.triTableau();
     obj.sommeElement();
     obj.plusPetitElement();
     obj.plusGrandElement();

 }

