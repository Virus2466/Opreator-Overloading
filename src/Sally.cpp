#include "Sally.h"
#include <iostream>
using namespace std;


Sally::Sally()
{

}

Sally::Sally(int a){
    num = a ;
}

Sally Sally::operator+(Sally aso){
    Sally brandnew;
    brandnew.num = num + aso.num;
    return(brandnew);
}

