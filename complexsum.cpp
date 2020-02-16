#include "complexsum.h"
#include <iostream>

using namespace std;

complexsum::complexsum()
{
    Real = 0;
    Imaginary = 0 ;
}

complexsum::complexsum(int r, int i)
{
    Real = r;
    Imaginary = i;
}

complexsum complexsum::operator+(complexsum &a)
{
    complexsum t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}

complexsum operator+(int a, complexsum &b)
{
    complexsum t;
    t.Real = a + b.Real;
    t.Imaginary = 0 + b.Imaginary;
    return t;
}
complexsum operator+(complexsum &a, int b)
{
    complexsum t;
    t.Real = a.Real+ b;
    t.Imaginary = a.Imaginary;
    return t;
}

void complexsum::print()
{
    cout<<Real<<"+"<<Imaginary<<"i"<<endl;
}

