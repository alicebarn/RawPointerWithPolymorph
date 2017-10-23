/**
 * Missouri State University
 * CSC232 - Data Structures with C++, Fall 2017
 *
 * @brief An implementation of the parent class in the Human class hierarchy.
 * @file Parent.cpp
 * @author Jim Daehn
 */

#include "Parent.h"

Parent::Parent(const std::string &name) : name_{name} {

}

std::string Parent::whoAmI() const {
    return name_;
}
