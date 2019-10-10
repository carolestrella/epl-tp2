#include "eval.h"


int Eval::visit (Lit* l){
    return l->number;
}

int Eval::visit (Add* a){
    return a->left->accept(this) + a->right->accept(this);
}

int Eval::visit (Neg* n){
    return n->number->accept(this) * -1;
}