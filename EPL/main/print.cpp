#include "print.h"

int Print::visit (Lit* l){
    cout << l->number;
    return 0;
}

int Print::visit (Add* a){
    cout << '(';
    a->left->accept(this);
    cout << " + ";
    a->right->accept(this);
    cout << ')';
    return 0;
}

int Print::visit (Neg* n){
    cout << "(";
    cout << "-";
    n->number->accept(this);
    cout << ")";
    return 0;
}