#ifndef NEG_H_INCLUDED
#define NEG_H_INCLUDED
#include "expressions.h"

class Neg:public Exp{
    public:
        Exp *number; //ponteiros
        inline int accept (Visitor *v){
            return v->visit (this);
        }
        inline Neg (Exp* number){
            this->number = number;
        }
};  

#endif