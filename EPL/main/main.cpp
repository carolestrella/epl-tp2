#include "add.h"
#include "neg.h"
#include "lit.h"
#include "eval.h"
#include "print.h"
#include <iostream>

using namespace std;

int main(){
    Visitor* ev  = new Eval  ();
    Visitor* prt = new Print ();

    Exp* lit5  = new Lit (5);
    Exp* lit3  = new Lit (3);
    Exp* litn3 = new Neg (lit3);
    Exp* lit8  = new Add (lit5, litn3);

    cout << lit8->accept (ev);
    
    cout << endl;
    lit8->accept (prt);
    cout << endl;

}
