#ifndef PEAPLE_H
#define PEAPLE_H
#include <string>
#include "Birthday.h"
using namespace std;
class Peaple
{
    public:
        Peaple(string x , Birthday bo);
        void printInfo();
    private:
        string name;
        Birthday DateofBirth;
};

#endif // PEAPLE_H
