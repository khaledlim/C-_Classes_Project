#include "Peaple.h"
#include "Birthday.h"
#include <iostream>
using namespace std;
Peaple::Peaple(string x , Birthday bo)
: name(x), DateofBirth(bo)
{
}
void Peaple::printInfo(){
cout <<name<<" was born on ";
DateofBirth.printDate();
}
