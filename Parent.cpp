//
// Created by dad on 10/21/17.
//

#include "Parent.h"

Parent::Parent(const std::string &name) : name_{name} {

}

std::string Parent::whoAmI() const {
    return name_;
}
