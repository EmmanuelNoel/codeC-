#include<iostream>
#include"addition.h"

using namespace std;

int Addition :: sum(int nombre1,int nombre2)
{

    resultat = nombre1 + nombre2;
}

void Addition :: print()
{

    cout<<"La somme est "<<resultat<<endl;
}


Addition :: Addition() : nombre1(0),nombre2(0),resultat(0)
{


}



