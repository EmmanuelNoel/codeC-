#include <iostream>
using namespace std;
class Distance
{
private:
int m;
double cm;
public:
void getDistance()
{
cout<<"\n Entrer les metres: ";
cin>>m ;
cout<< " Entrer les centimetres : " ;
cin>>cm ;
}
void afficherDistance()
{cout<< m << "m" << cm << "cm" ;}
} ;
int main()
{
Distance dist ;

dist.getDistance() ;
dist.afficherDistance() ;
Distance* distptr ; // pointeur sur Distance
distptr = new Distance ;
distptr -> getDistance() ;
distptr -> afficherDistance() ;
cout << endl ;
return 0 ;
};
