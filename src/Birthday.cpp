#include "Birthday.h"
#include <iostream>
using namespace std;

Birthday::Birthday(int d,int m,int y)
{
    month=m;
    year=y;
    day=d;
}
void Birthday::printDate(){
cout<<day<<"/"<<month<<"/"<<year;
}
