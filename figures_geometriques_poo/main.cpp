#include <iostream>
#include<figures.h>

using namespace std;

int main()
{
   Pave obj;
   Figure * ptr;
   ptr = &obj;
   ptr->getDonne();
}
