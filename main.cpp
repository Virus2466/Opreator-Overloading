#include <iostream>
#include "Sally.h"
using namespace std;

int main()
{

    Sally a(99);
    Sally b(45);
    Sally c;

    c=a+b;
    cout<< c.num << endl;

    return 0;
}
