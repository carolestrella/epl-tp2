#ifndef ADD_H_INCLUDED
#define ADD_H_INCLUDED
#include "expressions.h"

class Add:public Exp{
    public:
        
        Exp *left, *right; //ponteiros

        inline int accept (Visitor *v){
            return v->visit(this);
        }

        inline Add (Exp* left, Exp* right){
            this->left = left;
            this->right = right;
        }
};

#endif