//
// Created by dad on 10/21/17.
//

#include "Child.h"

Child::Child(const std::string &name, const std::string &parent) : Parent::Parent(name), parent_{parent} {

}

std::string Child::whoAmI() const {
    return Parent::whoAmI();
}

std::string Child::whoIsMyParent() const {
    return parent_;
}
