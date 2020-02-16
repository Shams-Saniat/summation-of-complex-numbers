#include <iostream>
#include "complexsum.h"

using namespace std;

int main()
{
    complexsum c1(1, 2);
    complexsum c2(3, 4);
    complexsum sum;
    sum = c1+c2;
    sum.print();
    return 0;
}
