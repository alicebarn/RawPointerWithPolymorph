/**
 * Missouri State University
 * CSC232 - Data Structures with C++, Fall 2017
 *
 * @brief An implementation of the child class in the Human class hierarchy.
 * @file Child.cpp
 * @author Jim Daehn
 */
#include "Child.h"

Child::Child(const std::string &name, const std::string &parent) : Parent::Parent(name), parent_{parent} {

}

std::string Child::whoAmI() const {
    return Parent::whoAmI();
}

std::string Child::whoIsMyParent() const {
    return parent_;
}
