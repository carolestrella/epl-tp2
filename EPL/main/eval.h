#include "expressions.h"
#include "add.h"
#include "neg.h"
#include "lit.h"



class Eval : public Visitor{
    public:
        int visit (Add*);

        int visit (Neg*);
        
        int visit (Lit*);
};