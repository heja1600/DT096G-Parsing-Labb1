#ifndef LOWERCASE_H
#define LOWERCASE_H

#include "op.h"
#include "object.h"


struct lowercase: op {
    object *eval(object *o){
        return operands[0]->eval(o);
    }
    std::string id() override{
        return "lowercase";
    }
};

#endif /* LOWERCASE_H */