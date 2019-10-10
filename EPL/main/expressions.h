#ifndef EXPRESSIONS_H_INCLUDED
#define EXPRESSIONS_H_INCLUDED


#include <iostream>


using namespace std;


class Visitor;

class Exp{ 
    public:
        virtual int accept (Visitor*) = 0;
};


class Add;
class Neg;
class Lit;

class Visitor{
    public:
        virtual int visit (Add*) = 0;

        virtual int visit (Neg*) = 0;

        virtual int visit (Lit*) = 0;
};


#endif