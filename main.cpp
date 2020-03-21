#include <iostream>
#include "Peaple.h"
#include "Birthday.h"
using namespace std;

int main()
{
   Birthday birthObject(1,8,1995) ;
   Peaple klaud("klaud Ronaldo CR7",birthObject);
   klaud.printInfo();
}
