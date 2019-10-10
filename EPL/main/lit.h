#ifndef LIT_H_INCLUDED
#define LIT_H_INCLUDED
#include "expressions.h"


class Lit:public Exp{
    public:
        int number; //ponteiros
        
        int accept (Visitor *v){
            return v->visit(this);
        }
        
        inline Lit (int number){
            this->number = number;
        }
};

#endif